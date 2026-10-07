
void FUN_1002f69f0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) != 0) {
    if (*(char *)(lVar1 + 0xca) == '\0') {
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Cancel pipe zero",lVar1 + 0xcf);
      }
      FUN_1002d7180(*(undefined8 *)(param_1 + 8));
      return;
    }
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002f6a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined1 *)(param_1 + 0x18));
      return;
    }
  }
  return;
}

