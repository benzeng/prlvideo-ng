
undefined1 FUN_100106310(void)

{
  long *plVar1;
  undefined1 uVar2;
  char local_19;
  
  if (DAT_1023108c0 == (long *)0x0) {
    plVar1 = operator_new(0x18);
    FUN_100106960(plVar1,&local_19);
    if (local_19 == '\0') {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = DAT_1023108c0;
    }
    DAT_1023108c0 = plVar1;
    uVar2 = 1;
    if (DAT_1023108c0 == (long *)0x0) {
      uVar2 = 0;
      FUN_100df99c0("GSHEXT","prl_client_app",0,"Error: failed to create SharedHostApps dispatcher")
      ;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

