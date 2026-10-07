
undefined8 FUN_100699d00(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x38) != -1) && (*(char *)(param_1 + 0x40) != '\0')) {
    plVar1 = *(long **)(*(long *)(**(long **)(param_1 + 0x30) + -0x18) + 8 +
                       (long)*(long **)(param_1 + 0x30));
    uVar4 = 0;
    cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)(param_1 + 8),0x1000,0);
    if (cVar2 == '\0') {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = FUN_100768f60();
      FUN_1008e3970("","dimg",0,"FlushOffsets failed. Write [Offset %llu] Error %d",uVar4,uVar3);
      uVar4 = 0x80021027;
    }
    else {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  return uVar4;
}

