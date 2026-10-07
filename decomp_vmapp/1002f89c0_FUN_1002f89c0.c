
undefined4
FUN_1002f89c0(long param_1,char param_2,uint param_3,short param_4,ushort param_5,void *param_6,
             uint *param_7)

{
  undefined8 in_RAX;
  uint uVar1;
  undefined4 uVar2;
  undefined8 uStack_28;
  
  uVar2 = 0x20;
  uStack_28 = in_RAX;
  if (param_3 != 3) {
    if (param_3 != 2) {
      if (param_3 != 1) {
        return 0x20;
      }
      if (param_2 < '\0') {
        return 0x20;
      }
      if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
        return 0x20;
      }
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"CCID ABORT bSeq,bSlot=%x",param_4);
      }
      if ((char)param_4 != '\0') {
        return 0;
      }
      QMutex::lock();
      if (*(int *)(param_1 + 0x80) != 0) {
        if (*(long *)(param_1 + 0xa8) == 0) {
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x84) = 1;
          QWaitCondition::wakeOne();
        }
      }
      QMutex::unlock();
      return 0;
    }
    uStack_28._0_4_ = (undefined4)in_RAX;
    uStack_28 = CONCAT44(0x12c0,(undefined4)uStack_28);
  }
  if (((param_2 < '\0') && (param_4 == 0)) &&
     (param_5 < *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4))) {
    if ((param_3 & 0xff) == 3) {
      uStack_28 = CONCAT44(0x2580,(undefined4)uStack_28);
    }
    uVar1 = 4;
    if (*param_7 < 4) {
      uVar1 = *param_7;
    }
    _memcpy(param_6,(void *)((long)&uStack_28 + 4),(ulong)uVar1);
    *param_7 = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}

