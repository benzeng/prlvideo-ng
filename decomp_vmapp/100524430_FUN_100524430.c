
undefined4 FUN_100524430(long param_1,long param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  int local_48 [2];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(ushort *)(param_2 + 0x14) < 4) {
    return 0xf0000003;
  }
  QMutex::lock();
  if ((param_3 != '\0') && (*(long *)(param_1 + 0xb8) != 0)) {
    uVar6 = 0xf000001e;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","ShellIntHost",1,"request already exists");
    }
    goto LAB_10052459c;
  }
  piVar3 = (int *)FUN_1002a6010(param_2);
  uVar4 = FUN_1002a6010(param_2);
  ___bzero(uVar4,*(undefined2 *)(param_2 + 0x14));
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar2 = FUN_100525db0(*(undefined8 *)(param_1 + 0xa8),local_48);
  if (cVar2 != '\0') {
    *piVar3 = local_48[0];
    uVar1 = *(uint *)(local_40 + 4);
    if ((((uVar1 != 0) && (*(short *)(param_2 + 0x16) != 0)) &&
        (lVar5 = FUN_1002a6120(param_2,0,1), lVar5 != 0)) && (uVar1 <= *(uint *)(lVar5 + 8))) {
      FUN_1002a5a50(lVar5,0,local_40 + *(long *)(local_40 + 0x10),uVar1);
      *(uint *)(lVar5 + 0x10) = uVar1;
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052457e;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10052457e:
  uVar6 = 0;
  if ((param_3 != '\0') && (*piVar3 == 0)) {
    *(long *)(param_1 + 0xb8) = param_2;
    uVar6 = 0xffffffff;
  }
LAB_10052459c:
  QMutex::unlock();
  return uVar6;
}

