
char * FUN_100b9d570(void)

{
  char *pcVar1;
  
  if (DAT_1023143c4 != '\0') {
    return &DAT_1023143c4;
  }
  if (DAT_1023143c0 == 0) {
    return "OK";
  }
  if (DAT_1023143c0 == 2) {
    return "Invalid HWID";
  }
  if (DAT_1023143c0 == 1) {
    return "Invalid license";
  }
  if (DAT_1023143c0 == -1) {
    return "Fatal error";
  }
  if (DAT_1023143c0 == -2) {
    return "No enough memory";
  }
  if (DAT_1023143c0 == -3) {
    return "Invalid parameter";
  }
  if (DAT_1023143c0 == -4) {
    return "I/O error";
  }
  if (DAT_1023143c0 == -5) {
    return "Entry already exist";
  }
  if (DAT_1023143c0 == -6) {
    return "Library not initialized";
  }
  if (DAT_1023143c0 == -7) {
    return "License does not exist";
  }
  if (DAT_1023143c0 == -8) {
    return "Access denied";
  }
  if (DAT_1023143c0 == -9) {
    return "Resource locked";
  }
  if (DAT_1023143c0 == -10) {
    return "Error on KA server";
  }
  if (DAT_1023143c0 == -0xb) {
    return "No data";
  }
  if (DAT_1023143c0 == -0xc) {
    return "Wrong license";
  }
  if (DAT_1023143c0 == -0xd) {
    return "Operation does not supported for this object";
  }
  if (DAT_1023143c0 == -0xe) {
    return "Network error";
  }
  if (DAT_1023143c0 == -0xf) {
    return "HTTP Proxy error";
  }
  if (DAT_1023143c0 == -0x10) {
    return "HTTP Proxy authentication required";
  }
  if (DAT_1023143c0 == -0x12) {
    return "Timeout expired";
  }
  pcVar1 = "Unknown error";
  if (DAT_1023143c0 == -0x11) {
    pcVar1 = "Operation was cancelled";
  }
  return pcVar1;
}

