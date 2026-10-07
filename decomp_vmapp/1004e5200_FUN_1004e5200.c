
undefined8
FUN_1004e5200(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long *param_6)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  QString *pQVar5;
  int *piVar6;
  uint uVar7;
  QArrayData *pQVar8;
  undefined8 uVar9;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_6 = 0;
  iVar3 = QString::lastIndexOf(param_1,0x2f,0xffffffff,1);
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  iVar4 = QString::indexOf(param_1,0x3a,iVar4,1);
  if (-1 < iVar4) {
    return 0xf000000d;
  }
  pQVar5 = operator_new(0x18);
  QDir::toNativeSeparators(pQVar5);
  QString::toUtf8_helper(pQVar5 + 1);
  *(undefined4 *)&pQVar5[2].field0_0x0 = 0xffffffff;
  *(undefined1 *)((long)&pQVar5[2].field0_0x0 + 4) = 0;
  *param_6 = (long)pQVar5;
  cVar2 = FUN_1004c5f50();
  uVar7 = 0x1a4;
  if (cVar2 != '\0') {
    uVar7 = 0x1ed;
  }
  QString::toUtf8_helper(&local_40);
  iVar4 = _open((char *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)),0x602,
                (ulong)uVar7);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e5301;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,1,8);
  }
LAB_1004e5301:
  if (iVar4 == -1) {
    piVar6 = ___error();
    iVar4 = *piVar6;
    if (iVar4 < 0x3f) {
      uVar9 = 0xf000001a;
      switch(iVar4) {
      case 1:
        uVar9 = 0xf0000007;
        break;
      case 2:
        break;
      default:
switchD_1004e53a1_caseD_3:
        uVar9 = 0xf000001c;
        break;
      case 5:
        uVar9 = 0xf000001c;
        break;
      case 9:
        uVar9 = 0xf0000012;
        break;
      case 0xd:
      case 0x1e:
        uVar9 = 0xf0000007;
        break;
      case 0xe:
        uVar9 = 0xf0000006;
        break;
      case 0x11:
        uVar9 = 0xf0000017;
        break;
      case 0x14:
        uVar9 = 0xf0000015;
        break;
      case 0x16:
      case 0x1d:
        uVar9 = 0xf0000003;
        break;
      case 0x17:
      case 0x18:
        uVar9 = 0xf000001b;
        break;
      case 0x1c:
        uVar9 = 0xf000000c;
      }
    }
    else if (iVar4 == 0x3f) {
      uVar9 = 0xf0000018;
    }
    else {
      if (iVar4 != 0x42) goto switchD_1004e53a1_caseD_3;
      uVar9 = 0xf000000b;
    }
  }
  else {
    if ((param_2 & 2) != 0) {
      _fchflags(iVar4,0x8000);
    }
    *(int *)(*param_6 + 0x10) = iVar4;
    if (param_5 == 0) {
      return 0;
    }
    iVar3 = _ftruncate(iVar4,param_5);
    if (iVar3 != -1) {
      return 0;
    }
    piVar6 = ___error();
    iVar3 = *piVar6;
    if (iVar3 < 0x3f) {
      uVar9 = 0xf0000019;
      switch(iVar3) {
      case 1:
        uVar9 = 0xf0000007;
        break;
      case 2:
        break;
      default:
switchD_1004e5370_caseD_3:
        uVar9 = 0xf000001c;
        break;
      case 9:
        uVar9 = 0xf0000012;
        break;
      case 0xd:
      case 0x1e:
        uVar9 = 0xf0000007;
        break;
      case 0xe:
        uVar9 = 0xf0000006;
        break;
      case 0x11:
        uVar9 = 0xf0000017;
        break;
      case 0x14:
        uVar9 = 0xf0000015;
        break;
      case 0x16:
      case 0x1d:
        uVar9 = 0xf0000003;
        break;
      case 0x17:
      case 0x18:
        uVar9 = 0xf000001b;
        break;
      case 0x1c:
        uVar9 = 0xf000000c;
      }
    }
    else if (iVar3 == 0x3f) {
      uVar9 = 0xf0000018;
    }
    else {
      if (iVar3 != 0x42) goto switchD_1004e5370_caseD_3;
      uVar9 = 0xf000000b;
    }
    _close(iVar4);
    QString::toUtf8_helper(&local_48);
    _remove((char *)(local_48.field0_0x0 + *(long *)(local_48.field0_0x0 + 0x10)));
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto switchD_1004e53a1_caseD_2;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,1,8);
    }
  }
switchD_1004e53a1_caseD_2:
  puVar1 = (undefined8 *)*param_6;
  if (puVar1 == (undefined8 *)0x0) goto LAB_1004e5503;
  pQVar8 = (QArrayData *)puVar1[1];
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e54cd;
      pQVar8 = (QArrayData *)puVar1[1];
    }
    QArrayData::deallocate(pQVar8,1,8);
  }
LAB_1004e54cd:
  pQVar8 = (QArrayData *)*puVar1;
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e54fb;
      pQVar8 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1004e54fb:
  operator_delete(puVar1);
LAB_1004e5503:
  *param_6 = 0;
  return uVar9;
}

