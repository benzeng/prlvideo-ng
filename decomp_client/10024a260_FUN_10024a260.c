
undefined4 FUN_10024a260(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char local_39;
  QArrayData *local_38;
  undefined1 local_2c;
  undefined1 local_29;
  
  uVar3 = FUN_100152280();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_38,uVar6);
  pQVar4 = (QObject *)FUN_1001547d0(uVar3,&local_38);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2c = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2c) goto LAB_10024a2ee;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10024a2ee:
  if (piVar5 == (int *)0x0) {
    return 0x80000009;
  }
  uVar7 = 0x80000009;
  if ((pQVar4 == (QObject *)0x0) || (piVar5[1] == 0)) goto LAB_10024a3ab;
  local_39 = '\0';
  uVar6 = FUN_1001766b0(pQVar4);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0x30dae) {
    if (iVar1 < 0x40c) {
      uVar3 = 0x2f;
      switch(iVar1) {
      case 0x3e9:
        break;
      case 0x3ea:
        uVar3 = 0x35;
        break;
      default:
        goto switchD_10024a354_caseD_3eb;
      case 0x3ee:
        uVar3 = 0x36;
        break;
      case 0x3ef:
        uVar3 = 0x34;
        break;
      case 0x3f0:
        uVar3 = 0x30;
        break;
      case 0x3f3:
        uVar3 = 0x37;
        break;
      case 0x3f4:
        uVar3 = 0x38;
      }
    }
    else if (iVar1 == 0x40c) {
      uVar3 = 0x33;
    }
    else {
      if (iVar1 != 0x40f) goto switchD_10024a354_caseD_3eb;
      uVar3 = 0x32;
    }
  }
  else if (iVar1 == 0x30dae) {
    uVar3 = 0x31;
  }
  else {
switchD_10024a354_caseD_3eb:
    uVar3 = 0;
  }
  cVar2 = FUN_100615ca0(uVar6,uVar3,&local_39);
  uVar7 = 0x80000009;
  if (cVar2 != '\x01') {
    uVar7 = 0;
  }
  if (local_39 == '\0') {
    uVar7 = 0;
  }
LAB_10024a3ab:
  LOCK();
  *piVar5 = *piVar5 + -1;
  local_29 = *piVar5 != 0;
  UNLOCK();
  if (!(bool)local_29) {
    operator_delete(piVar5);
  }
  return uVar7;
}

