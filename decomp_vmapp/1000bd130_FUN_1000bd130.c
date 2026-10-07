
void FUN_1000bd130(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  QArrayData *local_58;
  long *local_50;
  QArrayData *local_48;
  char local_39;
  QString local_38;
  undefined1 local_29;
  
  local_39 = '\0';
  lVar9 = *(long *)(param_1 + 0x48);
  iVar5 = *(int *)(lVar9 + 0x14);
  if (0xbc5 < iVar5) {
    if (iVar5 < 0xfa4) {
      switch(iVar5) {
      case 0xbc6:
        local_39 = FUN_10007abf0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
        break;
      default:
        goto switchD_1000bd1ef_caseD_402;
      case 0xbcc:
        local_39 = FUN_10006f0d0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
        break;
      case 0xbd0:
switchD_1000bd1b7_caseD_bd0:
        local_39 = FUN_10006f0b0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
        break;
      case 0xbd1:
switchD_1000bd1b7_caseD_bd1:
        if ((*(uint *)(param_1 + 0xa4) < 0x16) &&
           ((0x280600U >> (*(uint *)(param_1 + 0xa4) & 0x1f) & 1) != 0)) {
          FUN_10008f910(param_1,0x80000056);
          return;
        }
        local_39 = FUN_10006f0c0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
        break;
      case 0xbd2:
        local_39 = FUN_10007b3d0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
        break;
      case 0xbd3:
        local_39 = FUN_10006d3b0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
        break;
      case 0xbd4:
        local_39 = FUN_10006cec0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
      }
      goto LAB_1000bd685;
    }
    if (iVar5 < 0x4e24) {
      if (iVar5 == 0xfa4) {
        local_39 = FUN_1000792a0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
      }
      else {
        if (iVar5 != 0xfac) {
          if (iVar5 == 0xfb0) goto switchD_1000bd1ef_caseD_403;
          goto switchD_1000bd1ef_caseD_402;
        }
        local_39 = FUN_10007b0b0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
      }
      goto LAB_1000bd685;
    }
    if (iVar5 < 0x4e3c) {
      switch(iVar5) {
      case 0x4e24:
        uVar4 = 0x80000001;
        if (0xd < *(uint *)(param_1 + 0xa4)) {
          uVar8 = FUN_1007d87f0();
          uVar4 = 0;
          FUN_1008e3970("","vm",0,"[%8llu] VPC freeze with dl:%llu t:%llu",uVar8 / 1000,
                        *(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x718),
                        *(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x710));
          FUN_1000a79f0(param_1,0x8000000000,0);
        }
        break;
      default:
        goto switchD_1000bd1ef_caseD_402;
      case 0x4e26:
        goto switchD_1000bd28c_caseD_4e26;
      case 0x4e27:
      case 0x4e28:
        uVar4 = 0;
        FUN_1000a79f0(param_1,0x40000000,0);
        FUN_10008f760(param_1,0x80000275);
        FUN_10008f440(param_1);
        FUN_10008ec80(param_1,0xc);
        break;
      case 0x4e2b:
        FUN_1002aece0(*(undefined8 *)(param_1 + 0x1a38));
        FUN_1002af430(*(undefined8 *)(param_1 + 0x1a38),*(undefined4 *)(param_1 + 0x1abc));
        uVar4 = 0;
      }
      goto switchD_1000bd1ef_caseD_407;
    }
    if (iVar5 < 0x4e4b) {
      switch(iVar5) {
      case 0x4e3c:
        FUN_10011a560(&local_c8,lVar9 + 0x18);
        lVar9 = 0;
        if (local_c8 != (long *)0x0) {
          lVar9 = local_c8[2];
        }
        FUN_10011ce90(&local_c0,lVar9);
        QString::toUtf8();
        FUN_1008e3970("","vm",0,"Skip cancel command for the request %s",
                      local_b8 + *(long *)(local_b8 + 0x10));
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_29 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000bd4c7;
          }
          QArrayData::deallocate(local_b8,1,8);
        }
LAB_1000bd4c7:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_29 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000bd4fd;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1000bd4fd:
        uVar4 = 0x80000275;
        if (local_c8 == (long *)0x0) goto switchD_1000bd1ef_caseD_407;
        LOCK();
        plVar6 = local_c8 + 1;
        iVar5 = (int)*plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        local_50 = local_c8;
        uVar4 = 0x80000275;
        goto LAB_1000bd7d1;
      default:
        goto switchD_1000bd1ef_caseD_402;
      case 0x4e3e:
        uVar4 = 0;
        if (*(int *)(lVar9 + 0x28) != 0) {
          uVar4 = **(undefined4 **)(lVar9 + 0x30);
        }
        FUN_1000af840(param_1,uVar4);
        break;
      case 0x4e3f:
        uVar4 = 0;
        if (*(int *)(lVar9 + 0x28) != 0) {
          uVar4 = **(undefined4 **)(lVar9 + 0x30);
        }
        FUN_1000af8e0(param_1,uVar4);
        break;
      case 0x4e41:
        uVar4 = 0;
        if (*(int *)(lVar9 + 0x28) != 0) {
          uVar4 = **(undefined4 **)(lVar9 + 0x30);
        }
        FUN_1000af980(param_1,uVar4);
        cVar3 = FUN_1000afc00(param_1);
        goto LAB_1000bd9df;
      case 0x4e44:
        FUN_100258820();
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        FUN_1000b5140(&local_98,(QString *)(param_1 + 0x109d8));
        QString::fromUtf8_helper((char *)&local_38,0xa320a0);
        QString::operator=((QString *)(param_1 + 0x109d8),&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_29 = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000bd98b;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
LAB_1000bd98b:
        FUN_10002ddb0(local_b0,&local_98);
        FUN_100408ff0(param_1 + 0x10b0,0x80000200,local_b0);
        FUN_10002d9d0(local_b0);
        FUN_10002d9d0(&local_98);
        uVar4 = 0;
        goto switchD_1000bd1ef_caseD_407;
      }
      cVar3 = FUN_1000afac0(param_1);
      if (cVar3 == '\0') {
        cVar3 = FUN_1000afc00(param_1);
LAB_1000bd9df:
        uVar4 = 0;
        if (cVar3 != '\0') {
          FUN_10008fa70(param_1,0x4e4b);
        }
        goto switchD_1000bd1ef_caseD_407;
      }
      uVar10 = 0x4e4a;
    }
    else {
      if (iVar5 != 0x4e4b) goto switchD_1000bd1ef_caseD_402;
      uVar4 = 0x80000001;
      if (*(uint *)(param_1 + 0xa4) < 0xe) goto switchD_1000bd1ef_caseD_407;
      FUN_10008ef80(param_1);
      FUN_10008ec80(param_1,5);
      FUN_10008f940(param_1);
      uVar10 = 0x4e4b;
    }
    FUN_10008fa70(param_1,uVar10);
    uVar4 = 0;
    goto switchD_1000bd1ef_caseD_407;
  }
  if (iVar5 < 0x400) {
    if (iVar5 < 0x3f6) {
      if (iVar5 == 0x3ee) {
switchD_1000bd28c_caseD_4e26:
        FUN_1000a79f0(param_1,0x40000000,0);
        uVar10 = DAT_1011c3650;
        local_78 = (void *)0x0;
        pvStack_70 = (void *)0x0;
        local_68 = 0;
        plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_80 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          *(undefined4 *)(plVar6 + 1) = 1;
          plVar6[2] = 0;
          *plVar6 = (long)&PTR_FUN_100bef0d0;
          local_80 = plVar6;
        }
        FUN_100063770(uVar10,0x186b8,0,&local_78,0xbbb,&local_80);
        if (local_80 != (long *)0x0) {
          LOCK();
          plVar6 = local_80 + 1;
          lVar9 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)(*local_80 + 0x10))();
          }
        }
        if (local_78 != (void *)0x0) {
          if (pvStack_70 != local_78) {
            pvStack_70 = (void *)((~((long)pvStack_70 + (-8 - (long)local_78)) & 0xfffffffffffffff8U
                                  ) + (long)pvStack_70);
          }
          operator_delete(local_78);
        }
        FUN_10008f760(param_1,0x80000275);
        FUN_10008f440(param_1);
        FUN_10008ec80(param_1,0xc);
        uVar4 = 0;
        goto switchD_1000bd1ef_caseD_407;
      }
      if (iVar5 == 0x3f5) {
        local_39 = FUN_10006d8f0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
        goto LAB_1000bd685;
      }
    }
    else {
      if (iVar5 == 0x3f6) goto switchD_1000bd1b7_caseD_bd0;
      if (iVar5 == 0x3f8) goto switchD_1000bd1b7_caseD_bd1;
    }
switchD_1000bd1ef_caseD_402:
    uVar4 = 0x80000001;
    goto switchD_1000bd1ef_caseD_407;
  }
  uVar4 = 0x80000423;
  switch(iVar5) {
  case 0x400:
    uVar4 = 0x80000083;
    if (*(char *)(param_1 + 0x1ab8) != '\0') {
      FUN_100091ba0(param_1);
      uVar4 = 0;
    }
    break;
  case 0x401:
    local_39 = FUN_10006d3e0(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
    goto LAB_1000bd685;
  default:
    goto switchD_1000bd1ef_caseD_402;
  case 0x403:
  case 0x404:
  case 0x40d:
  case 0x414:
  case 0x416:
  case 0x418:
  case 0x41c:
  case 0x41d:
switchD_1000bd1ef_caseD_403:
    local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_39 = FUN_100071890(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000bd685;
      }
      QArrayData::deallocate(local_48,2,8);
    }
    goto LAB_1000bd685;
  case 0x407:
    break;
  case 0x408:
    uVar4 = 0;
    break;
  case 0x410:
    uVar4 = FUN_1000a1a50(param_1,lVar9 + 0x18);
    break;
  case 0x411:
    local_39 = FUN_10007c900(*(undefined8 *)(param_1 + 0xf8),lVar9 + 0x18);
LAB_1000bd685:
    lVar9 = *(long *)(param_1 + 0x48);
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar6 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar6 = plVar7;
    }
    plVar2 = *(long **)(lVar9 + 0x18);
    *(long **)(lVar9 + 0x18) = plVar6;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    uVar4 = 0;
    goto LAB_1000bd71d;
  case 0x41b:
    FUN_10011a560(&local_50,lVar9 + 0x18);
    lVar9 = 0;
    if (local_50 != (long *)0x0) {
      lVar9 = local_50[2];
    }
    FUN_10011ce90(&local_58,lVar9);
    iVar5 = QString::toInt((bool *)&local_58,(int)&local_39);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000bd79c;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1000bd79c:
    uVar4 = 0x80000083;
    if (local_39 != '\0') {
      uVar4 = 0;
      FUN_1000b1640(param_1,iVar5 != 0);
    }
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      iVar5 = (int)*plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
LAB_1000bd7d1:
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
switchD_1000bd1ef_caseD_407:
LAB_1000bd71d:
  FUN_10008f910(param_1,uVar4);
  return;
}

