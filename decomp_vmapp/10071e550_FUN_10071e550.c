
char * FUN_10071e550(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    return "OK";
  }
  if (param_1 == 2) {
    return "Invalid HWID";
  }
  if (param_1 == 1) {
    return "Invalid license";
  }
  if (param_1 == -1) {
    return "Fatal error";
  }
  if (param_1 == -2) {
    return "No enough memory";
  }
  if (param_1 == -3) {
    return "Invalid parameter";
  }
  if (param_1 == -4) {
    return "I/O error";
  }
  if (param_1 == -5) {
    return "Entry already exist";
  }
  if (param_1 == -6) {
    return "Library not initialized";
  }
  if (param_1 == -7) {
    return "License does not exist";
  }
  if (param_1 == -8) {
    return "Access denied";
  }
  if (param_1 == -9) {
    return "Resource locked";
  }
  if (param_1 == -10) {
    return "Error on KA server";
  }
  if (param_1 == -0xb) {
    return "No data";
  }
  if (param_1 == -0xc) {
    return "Wrong license";
  }
  if (param_1 == -0xd) {
    return "Operation does not supported for this object";
  }
  if (param_1 == -0xe) {
    return "Network error";
  }
  if (param_1 == -0xf) {
    return "HTTP Proxy error";
  }
  if (param_1 == -0x10) {
    return "HTTP Proxy authentication required";
  }
  if (param_1 == -0x12) {
    return "Timeout expired";
  }
  pcVar1 = "Unknown error";
  if (param_1 == -0x11) {
    pcVar1 = "Operation was cancelled";
  }
  return pcVar1;
}

