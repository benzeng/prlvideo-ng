
char * FUN_100b73a90(undefined8 param_1,int param_2,long param_3)

{
  char *pcVar1;
  
  if (param_2 == 1) {
    pcVar1 = "update";
    if (param_3 == 0) {
      pcVar1 = "upgrade";
    }
  }
  else if (param_2 == 2) {
    pcVar1 = "reset";
  }
  else if (param_2 == 3) {
    pcVar1 = "report";
  }
  else {
    pcVar1 = (char *)0x0;
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "!\"Invalid InstalledLicOperation\"","VzLicense.cpp",0x7cd,"convertToCString");
  }
  return pcVar1;
}

