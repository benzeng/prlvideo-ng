
void FUN_1004c7e70(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long in_RAX;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_38;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = -0xffffffd;
  local_38 = in_RAX;
  if (0x803f < iVar1) {
    switch(iVar1) {
    case 0x8040:
      LOCK();
      *(long *)(DAT_1011cc8f0 + 0xf0) = *(long *)(DAT_1011cc8f0 + 0xf0) + 1;
      UNLOCK();
      lVar6 = *(long *)(*param_1 + 0xb0);
      local_38 = param_2;
      if (lVar6 != 0) {
        QMutex::lock();
      }
      FUN_100036f00(lVar6 + 8,&local_38);
      if (lVar6 != 0) {
        QMutex::unlock();
      }
      iVar2 = -1;
      break;
    case 0x8041:
      LOCK();
      *(long *)(DAT_1011cc8f8 + 0xf0) = *(long *)(DAT_1011cc8f8 + 0xf0) + 1;
      UNLOCK();
      if (((3 < *(ushort *)(param_2 + 0x14)) && (*(short *)(param_2 + 0x16) != 0)) &&
         (lVar6 = FUN_1002a6120(param_2,0,1), lVar6 != 0)) {
        puVar3 = (undefined4 *)FUN_1002a6010(param_2);
        iVar2 = FUN_1004cfa70(*param_1 + 0x48,lVar6,*puVar3);
      }
      break;
    case 0x8042:
      LOCK();
      *(long *)(DAT_1011cc900 + 0xf0) = *(long *)(DAT_1011cc900 + 0xf0) + 1;
      UNLOCK();
      iVar2 = -1;
      FUN_1004d4b20(*(undefined8 *)(*param_1 + 0x38),param_2);
      break;
    case 0x8043:
      LOCK();
      *(long *)(DAT_1011cc908 + 0xf0) = *(long *)(DAT_1011cc908 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004ce5f0(param_1,param_2);
    }
    goto switchD_1004c7eb3_caseD_11;
  }
  switch(iVar1 + -0x200) {
  case 0:
  case 1:
  case 4:
  case 7:
  case 0xe:
  case 0x20:
  case 0x25:
    uVar9 = 1;
    goto LAB_1004c803f;
  case 2:
    goto switchD_1004c7eb3_caseD_2;
  case 3:
    goto switchD_1004c7eb3_caseD_3;
  case 5:
    goto switchD_1004c7eb3_caseD_5;
  case 6:
    goto switchD_1004c7eb3_caseD_6;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x27:
  case 0x28:
    uVar9 = 2;
LAB_1004c803f:
    FUN_1002a4d60(&DAT_1011c3e48,DAT_10111cc78,uVar9);
    switch(iVar1 + -0x200) {
    case 0:
      LOCK();
      *(long *)(DAT_1011cc858 + 0xf0) = *(long *)(DAT_1011cc858 + 0xf0) + 1;
      UNLOCK();
      if ((*(short *)(param_2 + 0x16) == 1) && (lVar6 = FUN_1002a6120(param_2,0,1), lVar6 != 0)) {
        iVar2 = FUN_1004ce8e0(*param_1 + 0x48,lVar6);
      }
      break;
    case 1:
      LOCK();
      *(long *)(DAT_1011cc860 + 0xf0) = *(long *)(DAT_1011cc860 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004c8a80(param_1,param_2);
      break;
    case 2:
switchD_1004c7eb3_caseD_2:
      LOCK();
      *(long *)(DAT_1011cc868 + 0xf0) = *(long *)(DAT_1011cc868 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004c8e20(param_1,param_2);
      break;
    case 3:
switchD_1004c7eb3_caseD_3:
      LOCK();
      *(long *)(DAT_1011cc878 + 0xf0) = *(long *)(DAT_1011cc878 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004c9340(param_1,param_2);
      break;
    case 4:
      LOCK();
      *(long *)(DAT_1011cc880 + 0xf0) = *(long *)(DAT_1011cc880 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004c9a70(param_1,param_2);
      break;
    case 5:
switchD_1004c7eb3_caseD_5:
      LOCK();
      *(long *)(DAT_1011cc888 + 0xf0) = *(long *)(DAT_1011cc888 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004c9d60(param_1,param_2);
      break;
    case 6:
switchD_1004c7eb3_caseD_6:
      LOCK();
      *(long *)(DAT_1011cc870 + 0xf0) = *(long *)(DAT_1011cc870 + 0xf0) + 1;
      UNLOCK();
      if ((*(short *)(param_2 + 0x14) == 4) && (*(short *)(param_2 + 0x16) == 0)) {
        uVar9 = FUN_1002a6010(param_2);
        iVar2 = FUN_1004ceea0(param_1,uVar9,1);
      }
      break;
    case 7:
      LOCK();
      *(long *)(DAT_1011cc8d0 + 0xf0) = *(long *)(DAT_1011cc8d0 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004caac0(param_1,param_2);
      break;
    case 8:
      LOCK();
      *(long *)(DAT_1011cc890 + 0xf0) = *(long *)(DAT_1011cc890 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004c9ea0(param_1,param_2);
      break;
    case 9:
      LOCK();
      *(long *)(DAT_1011cc8d8 + 0xf0) = *(long *)(DAT_1011cc8d8 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004caac0(param_1,param_2);
      break;
    case 10:
      LOCK();
      *(long *)(DAT_1011cc898 + 0xf0) = *(long *)(DAT_1011cc898 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004c9f70(param_1,param_2);
      break;
    case 0xb:
      LOCK();
      *(long *)(DAT_1011cc8a0 + 0xf0) = *(long *)(DAT_1011cc8a0 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004ca050(param_1,param_2);
      break;
    case 0xc:
      LOCK();
      *(long *)(DAT_1011cc8a8 + 0xf0) = *(long *)(DAT_1011cc8a8 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004ca140(param_1,param_2);
      break;
    case 0xd:
      LOCK();
      *(long *)(DAT_1011cc8b0 + 0xf0) = *(long *)(DAT_1011cc8b0 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004ca6a0(param_1,param_2);
      break;
    case 0xe:
      LOCK();
      *(long *)(DAT_1011cc8b8 + 0xf0) = *(long *)(DAT_1011cc8b8 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004ca7d0(param_1,param_2);
      break;
    case 0xf:
switchD_1004c7eb3_caseD_f:
      LOCK();
      *(long *)(DAT_1011cc8c0 + 0xf0) = *(long *)(DAT_1011cc8c0 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004ca8b0(param_1,param_2);
      break;
    case 0x10:
switchD_1004c7eb3_caseD_10:
      LOCK();
      *(long *)(DAT_1011cc8c8 + 0xf0) = *(long *)(DAT_1011cc8c8 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004ca9d0(param_1,param_2);
      break;
    case 0x20:
      LOCK();
      *(long *)(DAT_1011cc950 + 0xf0) = *(long *)(DAT_1011cc950 + 0xf0) + 1;
      UNLOCK();
      if (((*(short *)(param_2 + 0x16) == 1) && (*(short *)(param_2 + 0x14) == 0)) &&
         (lVar6 = FUN_1002a6120(param_2,0,1), lVar6 != 0)) {
        iVar2 = FUN_1004cf770(*param_1 + 0x48,lVar6);
      }
      break;
    case 0x21:
switchD_1004c7eb3_caseD_21:
      LOCK();
      *(long *)(DAT_1011cc958 + 0xf0) = *(long *)(DAT_1011cc958 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004cd160(param_1,param_2);
      break;
    case 0x22:
switchD_1004c7eb3_caseD_22:
      LOCK();
      *(long *)(DAT_1011cc918 + 0xf0) = *(long *)(DAT_1011cc918 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004cad80(param_1,param_2);
      break;
    case 0x23:
switchD_1004c7eb3_caseD_23:
      LOCK();
      *(long *)(DAT_1011cc920 + 0xf0) = *(long *)(DAT_1011cc920 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004cb430(param_1,param_2);
      break;
    case 0x24:
switchD_1004c7eb3_caseD_24:
      LOCK();
      *(long *)(DAT_1011cc928 + 0xf0) = *(long *)(DAT_1011cc928 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004cba00(param_1,param_2);
      break;
    case 0x25:
      LOCK();
      *(long *)(DAT_1011cc930 + 0xf0) = *(long *)(DAT_1011cc930 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004cbb90(param_1,param_2);
      break;
    case 0x26:
switchD_1004c7eb3_caseD_26:
      LOCK();
      *(long *)(DAT_1011cc938 + 0xf0) = *(long *)(DAT_1011cc938 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004cbf70(param_1,param_2);
      break;
    case 0x27:
      LOCK();
      *(long *)(DAT_1011cc940 + 0xf0) = *(long *)(DAT_1011cc940 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004cc1c0(param_1,param_2);
      break;
    case 0x28:
      LOCK();
      *(long *)(DAT_1011cc948 + 0xf0) = *(long *)(DAT_1011cc948 + 0xf0) + 1;
      UNLOCK();
      iVar2 = FUN_1004cc6b0(param_1,param_2);
    }
    break;
  case 0xf:
    goto switchD_1004c7eb3_caseD_f;
  case 0x10:
    goto switchD_1004c7eb3_caseD_10;
  case 0x21:
    goto switchD_1004c7eb3_caseD_21;
  case 0x22:
    goto switchD_1004c7eb3_caseD_22;
  case 0x23:
    goto switchD_1004c7eb3_caseD_23;
  case 0x24:
    goto switchD_1004c7eb3_caseD_24;
  case 0x26:
    goto switchD_1004c7eb3_caseD_26;
  case 0x29:
    LOCK();
    *(long *)(DAT_1011cc910 + 0xf0) = *(long *)(DAT_1011cc910 + 0xf0) + 1;
    UNLOCK();
    iVar2 = 0;
    break;
  case 0x2a:
    LOCK();
    *(long *)(DAT_1011cc868 + 0xf0) = *(long *)(DAT_1011cc868 + 0xf0) + 1;
    UNLOCK();
    iVar2 = FUN_1004c9040(param_1,param_2);
    break;
  case 0x2b:
    LOCK();
    *(long *)(DAT_1011cc870 + 0xf0) = *(long *)(DAT_1011cc870 + 0xf0) + 1;
    UNLOCK();
    if (((*(short *)(param_2 + 0x14) == 0x10) && (*(short *)(param_2 + 0x16) == 0)) &&
       (puVar4 = (uint *)FUN_1002a6010(param_2), *puVar4 < 4)) {
      iVar2 = FUN_1004ceea0(param_1,puVar4 + 1);
    }
    break;
  case 0x2c:
    LOCK();
    *(long *)(DAT_1011cc960 + 0xf0) = *(long *)(DAT_1011cc960 + 0xf0) + 1;
    UNLOCK();
    iVar2 = FUN_1004cd730(param_1,param_2);
    break;
  case 0x2d:
    LOCK();
    *(long *)(DAT_1011cc968 + 0xf0) = *(long *)(DAT_1011cc968 + 0xf0) + 1;
    UNLOCK();
    iVar2 = FUN_1004cdd60(param_1,param_2);
    break;
  case 0x3d:
    LOCK();
    *(long *)(DAT_1011cc8e8 + 0xf0) = *(long *)(DAT_1011cc8e8 + 0xf0) + 1;
    UNLOCK();
    iVar2 = FUN_1004ce3b0(param_1,param_2);
    break;
  case 0x3e:
    LOCK();
    *(long *)(DAT_1011cc8e0 + 0xf0) = *(long *)(DAT_1011cc8e0 + 0xf0) + 1;
    UNLOCK();
    if ((*(short *)(param_2 + 0x14) == 4) && (*(short *)(param_2 + 0x16) == 0)) {
      puVar5 = (undefined2 *)FUN_1002a6010(param_2);
      iVar2 = -0xfffffe4;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 6;
        puVar5[1] = (ushort)(DAT_10111cc70 != 0);
        iVar2 = 0;
      }
    }
  }
switchD_1004c7eb3_caseD_11:
  lVar6 = QThreadStorageData::get();
  if (lVar6 == 0) {
    plVar8 = operator_new(0x18);
    plVar8[2] = 0;
    plVar8[1] = 0;
    QThreadStorageData::set(param_1 + 1);
  }
  else {
    puVar7 = (undefined8 *)QThreadStorageData::get();
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)QThreadStorageData::set(param_1 + 1);
    }
    plVar8 = (long *)*puVar7;
  }
  if ((plVar8[1] != 0) && (lVar6 = FUN_1007d87f0(), 4999999 < (ulong)(lVar6 - *plVar8))) {
    _free((void *)plVar8[1]);
    plVar8[1] = 0;
  }
  if (iVar2 == -1) {
    return;
  }
  FUN_1004c07d0(*param_1,param_2,iVar2);
  return;
}

