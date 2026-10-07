
ulong FUN_10069d830(long param_1,void *param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_3 < 0x1001) {
    uVar6 = 0;
    uVar5 = FUN_100699e40(param_1,0);
    if ((int)uVar5 == 0) {
      _memcpy(*(void **)(param_1 + 8),param_2,(ulong)param_3);
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (*(long *)(param_1 + 0x38) != -1) {
        plVar1 = *(long **)(*(long *)(**(long **)(param_1 + 0x30) + -0x18) + 8 +
                           (long)*(long **)(param_1 + 0x30));
        uVar6 = 0;
        cVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)(param_1 + 8),0x1000,0);
        if (cVar3 == '\0') {
          uVar2 = *(undefined8 *)(param_1 + 0x38);
          uVar4 = FUN_100768f60();
          FUN_1008e3970("","dimg",0,"FlushOffsets failed. Write [Offset %llu] Error %d",uVar2,uVar4)
          ;
          uVar6 = 0x80021027;
        }
        else {
          *(undefined1 *)(param_1 + 0x40) = 0;
        }
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
      uVar5 = uVar5 & 0xffffffff;
      if ((int)uVar6 < 0) {
        uVar5 = (ulong)uVar6;
      }
    }
  }
  else {
    FUN_1008e3970("","dimg",0,"Too big chunk in WriteHeader %u",param_3);
    uVar5 = 0x80000001;
  }
  return uVar5;
}

