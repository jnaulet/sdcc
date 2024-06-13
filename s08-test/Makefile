CC := sdcc
BASENAME := s08-test

CFLAGS := --std-c99 --fomit-frame-pointer -I. -ms08 --stack-auto --out-fmt-elf
CFLAGS += --xram-loc 0x40 --xram-size 4096 --stack-loc 0x103e
CFLAGS += -Wl-bGSINIT0=0x1040 -Wl-bCSEG=0x3200 --debug

c_files := $(wildcard *.c)
rel_files += $(c_files:%.c=%.rel)

all: $(BASENAME).elf

$(BASENAME).elf: $(rel_files)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

%.rel: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.elf *.cdb *.hex *.ihx *.lk *.map *.mem *.omf
	rm -f *.adb *.asm *.lst *.rel *.rst *.sym

help:
	sdcc -h
	sdas6808 -h

.PHONY: clean
