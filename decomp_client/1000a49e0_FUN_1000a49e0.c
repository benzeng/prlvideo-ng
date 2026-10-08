
undefined1 FUN_1000a49e0(void)

{
  long *plVar1;
  undefined1 uVar2;
  char local_19;
  
  if (DAT_102310890 == (long *)0x0) {
    plVar1 = operator_new(0x18);
    FUN_1000a4dc0(plVar1,&local_19);
    if (local_19 == '\0') {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = DAT_102310890;
    }
    DAT_102310890 = plVar1;
    uVar2 = 1;
    if (DAT_102310890 == (long *)0x0) {
      uVar2 = 0;
      FUN_100df99c0("VSDD","prl_client_app",0,"Failed to create SharedHostApps dispatcher");
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

