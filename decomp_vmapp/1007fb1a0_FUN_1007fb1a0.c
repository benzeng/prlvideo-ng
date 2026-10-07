
void FUN_1007fb1a0(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1 + 7;
  *pcVar1 = *pcVar1 + '\x01';
  if (*pcVar1 == '\0') {
    pcVar1 = param_1 + 6;
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 == '\0') {
      pcVar1 = param_1 + 5;
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        pcVar1 = param_1 + 4;
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = param_1 + 3;
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = param_1 + 2;
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = param_1 + 1;
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                *param_1 = *param_1 + '\x01';
              }
            }
          }
        }
      }
    }
  }
  return;
}

