#
# Makefile
#

# set the executable name
EXEC=app

CC=gcc
CFLAGS+= -std=c99 -Wall -g
CFLAGS+= -D_XOPEN_SOURCE
CFLAGS+= -Iinclude
LDLIBS:= -lm

ODIR:=obj

SRC := $(wildcard *.c)
OBJS = $(patsubst %,$(ODIR)/%,$(SRC:.c=.o))

OUTPUT_GCC_FILE := $(ODIR)/gcc_output.cmd

all: clean $(EXEC)

-include $(ODIR)/*.d

$(EXEC): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS) $(LDLIBS)

$(ODIR)/%.o: %.c | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@ -MMD -MF $(@:.o=.d) 2>&1 |tee $(OUTPUT_GCC_FILE)

$(ODIR):
	mkdir $@

clean:
	$(RM) $(EXEC)
	$(RM) -rf $(ODIR)


test_compilation_no_error: clean all
	ls | grep $(EXEC)

test_compilation_no_warning: clean all
	$(eval WARNINGS_COUNT=$(shell sh -c "grep warning $(OUTPUT_GCC_FILE) | wc -l"))
	if [ $(WARNINGS_COUNT) -eq 0 ] ; then \
		echo "NO WARNING";\
	else \
		echo "WARNINGS DETECTED";\
		exit 1;\
	fi

test: all
	baygon -v -t t.yaml

grade: app
	@baygon -t t.yaml --report report.json --format json >&2 || true
	@python3 -c "import json; r=json.load(open('report.json'))['points']; \
	print(f\"{r['earned']/10:.1f}/{r['total']/10:.1f}\")"

.PHONY: grade clean all
.DEFAULT: app 
