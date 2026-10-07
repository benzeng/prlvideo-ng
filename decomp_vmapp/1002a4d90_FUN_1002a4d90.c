
ulong FUN_1002a4d90(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  
  QMutex::lock();
  piVar2 = (int *)(param_1 + 0x20);
  uVar3 = 0;
  do {
    if ((*piVar2 == param_2) && (piVar2[1] == param_3)) goto LAB_1002a4e75;
    if (*piVar2 == 0x17) {
LAB_1002a4e43:
      *(undefined1 *)(param_1 + 0x29 + uVar3 * 0xc) = 0;
      *(undefined1 *)(param_1 + 0x28 + uVar3 * 0xc) = 0;
      *(int *)(param_1 + 0x24 + uVar3 * 0xc) = param_3;
      *piVar2 = param_2;
      uVar1 = (int)uVar3 + 1;
      if (*(uint *)(param_1 + 0xc20) < uVar1) {
        *(uint *)(param_1 + 0xc20) = uVar1;
      }
      goto LAB_1002a4e75;
    }
    if ((piVar2[3] == param_2) && (piVar2[4] == param_3)) {
      uVar3 = uVar3 + 1;
      goto LAB_1002a4e75;
    }
    if (piVar2[3] == 0x17) {
      piVar2 = piVar2 + 3;
      uVar3 = uVar3 + 1;
      goto LAB_1002a4e43;
    }
    uVar3 = uVar3 + 2;
    piVar2 = piVar2 + 6;
  } while (uVar3 < 0x100);
  uVar3 = 0xffffffff;
  FUN_1008e3970("","LocalDevices",0,"Error inserting device 0x%x to usage map",param_3);
LAB_1002a4e75:
  QMutex::unlock();
  return uVar3 & 0xffffffff;
}

