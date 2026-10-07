
long FUN_1003a2680(undefined4 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  if (param_1[8] == 0) {
    puVar1 = *(undefined1 **)(param_1 + 0x34);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_1 + 0x38);
    }
    *puVar1 = 0;
    param_1[0x32] = 0;
    FUN_1003a18f0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x32,*param_1,param_1[1]);
    FUN_10039ed40(param_1 + 0x32,*param_1,"xyzw");
    lVar2 = *(long *)(param_1 + 0x34);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x38);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 10);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0xe);
    }
  }
  return lVar2;
}

