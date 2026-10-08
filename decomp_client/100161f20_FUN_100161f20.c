
void FUN_100161f20(undefined8 param_1,undefined4 param_2,long param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  QString QVar7;
  long lVar8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  long local_b0;
  QString local_a8;
  long local_a0;
  long local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  long local_70;
  long local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar1 = *(int *)(param_3 + 4);
  if (iVar1 < 0x842) {
    if (iVar1 < 0x828) {
      switch(iVar1) {
      case 0x7e7:
      case 0x7f1:
        local_40 = *(QArrayData **)(param_3 + 8);
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        FUN_100800be0(param_1,param_2,&local_40);
        if (*(int *)local_40 != -1) {
          QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            iVar1 = *(int *)local_40;
            UNLOCK();
            goto joined_r0x0001001622bd;
          }
LAB_1001624e6:
          QArrayData::deallocate((QArrayData *)QVar7.field0_0x0,2,8);
        }
        break;
      case 0x7e8:
      case 0x7f2:
        local_50 = *(QArrayData **)(param_3 + 8);
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
        }
        FUN_100800c40(param_1,param_2,&local_50);
        if (*(int *)local_50 != -1) {
          QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            iVar1 = *(int *)local_50;
            UNLOCK();
            goto joined_r0x0001001622bd;
          }
          goto LAB_1001624e6;
        }
        break;
      case 0x7e9:
        local_48 = *(QArrayData **)(param_3 + 8);
        if (1 < *(int *)local_48 + 1U) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + 1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
        }
        FUN_100800be0(param_1,param_2,&local_48);
        if (*(int *)local_48 != -1) {
          QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            iVar1 = *(int *)local_48;
            UNLOCK();
            goto joined_r0x0001001622bd;
          }
          goto LAB_1001624e6;
        }
        break;
      case 0x7ea:
        local_58 = *(QArrayData **)(param_3 + 8);
        if (1 < *(int *)local_58 + 1U) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
        FUN_100800790(param_1,param_2,&local_58);
        if (*(int *)local_58 != -1) {
          QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            iVar1 = *(int *)local_58;
            UNLOCK();
            goto joined_r0x0001001622bd;
          }
          goto LAB_1001624e6;
        }
        break;
      case 0x7eb:
        local_60 = *(QArrayData **)(param_3 + 8);
        if (1 < *(int *)local_60 + 1U) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + 1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
        }
        FUN_1008007f0(param_1,param_2,&local_60);
        if (*(int *)local_60 != -1) {
          QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            iVar1 = *(int *)local_60;
            UNLOCK();
            goto joined_r0x0001001622bd;
          }
          goto LAB_1001624e6;
        }
        break;
      case 0x7f0:
        if (*(int *)(param_3 + 0x10) == 6) {
          FUN_100800730(param_1,param_2,*(undefined4 *)(param_3 + 0x14));
        }
        else if (*(int *)(param_3 + 0x10) == 3) {
          FUN_1008006d0(param_1,param_2);
        }
        break;
      case 0x7f6:
        FUN_100801060(param_1,param_2);
        break;
      case 0x7fd:
        FUN_100800910(param_1,param_2);
        break;
      case 0x7fe:
        FUN_100800850(param_1,param_2);
        break;
      case 0x7ff:
        FUN_1008008b0(param_1,param_2);
        break;
      case 0x800:
        FUN_100800a80(param_1,param_2);
        break;
      case 0x801:
        FUN_1008009c0(param_1,param_2);
        break;
      case 0x802:
        FUN_100800a20(param_1,param_2);
      }
    }
    else if (iVar1 == 0x828) {
      lVar6 = *param_4;
      local_70 = lVar6;
      if (lVar6 != 0) {
        _PrlHandle_AddRef(lVar6);
      }
      FUN_100162bd0(param_1,&local_70,param_2);
      if (lVar6 != 0) {
        _PrlHandle_Free(lVar6);
      }
    }
    else if (iVar1 == 0x829) {
      lVar6 = *param_4;
      local_68 = lVar6;
      if (lVar6 != 0) {
        _PrlHandle_AddRef(lVar6);
      }
      uVar2 = *(undefined4 *)(param_3 + 0x10);
      uVar3 = *(undefined4 *)(param_3 + 0x14);
      piVar4 = *(int **)(param_3 + 0x18);
      lVar8 = 0;
      if (piVar4 != (int *)0x0) {
        lVar5 = *(long *)(param_3 + 0x20);
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_31 = *piVar4 != 0;
        UNLOCK();
        lVar8 = 0;
        if (((lVar5 != 0) && (piVar4[1] != 0)) &&
           (lVar8 = 0, (*(byte *)(*(long *)(lVar5 + 8) + 0x20) & 1) != 0)) {
          lVar8 = lVar5;
        }
      }
      FUN_100162a50(param_1,&local_68,param_2,uVar2,uVar3,lVar8);
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_31 = *piVar4 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar4);
        }
      }
      if (lVar6 != 0) {
        _PrlHandle_Free(lVar6);
      }
    }
  }
  else {
    switch(iVar1) {
    case 0x842:
      FUN_100800b30(param_1,param_2);
      break;
    case 0x845:
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_a0 = *param_4;
      if (local_a0 != 0) {
        _PrlHandle_AddRef();
      }
      SdkUtils::getResultHandle(&local_98,&local_a0);
      if (local_a0 != 0) {
        _PrlHandle_Free();
      }
      if (local_98 == 0) {
        FUN_100df99c0("","prl_client_app",0,
                      "(!)Error: result handle is invalid on DspCmdGetBackupTree.");
      }
      else {
        local_b0 = local_98;
        _PrlHandle_AddRef();
        SdkUtils::getParamXML(&local_a8,&local_b0,0);
        QString::operator=(&local_90,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001621a4;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_1001621a4:
        if (local_b0 != 0) {
          _PrlHandle_Free();
        }
      }
      local_b8 = *(QArrayData **)(param_3 + 8);
      if (1 < *(int *)local_b8 + 1U) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + 1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
      }
      FUN_100801520(param_1,param_2,&local_b8,&local_90);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001623af;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1001623af:
      if (local_98 != 0) {
        _PrlHandle_Free();
      }
      if (*(int *)local_90.field0_0x0 != -1) {
        QVar7.field0_0x0 = local_90.field0_0x0;
        if (*(int *)local_90.field0_0x0 == 0) goto LAB_1001624e6;
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        iVar1 = *(int *)local_90.field0_0x0;
        UNLOCK();
joined_r0x000100162209:
        local_31 = iVar1 != 0;
        if (!(bool)local_31) goto LAB_1001624e6;
      }
      break;
    case 0x846:
      local_78 = *(QArrayData **)(param_3 + 8);
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      FUN_100801340(param_1,param_2,&local_78);
      if (*(int *)local_78 != -1) {
        QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
        if (*(int *)local_78 == 0) goto LAB_1001624e6;
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        iVar1 = *(int *)local_78;
        UNLOCK();
        goto joined_r0x000100162209;
      }
      break;
    case 0x847:
      local_80 = *(QArrayData **)(param_3 + 8);
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      FUN_1008013a0(param_1,param_2,&local_80);
      if (*(int *)local_80 != -1) {
        QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          iVar1 = *(int *)local_80;
          UNLOCK();
joined_r0x0001001622bd:
          local_31 = iVar1 != 0;
          if ((bool)local_31) break;
        }
        goto LAB_1001624e6;
      }
      break;
    case 0x848:
      local_88 = *(QArrayData **)(param_3 + 8);
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      FUN_100801400(param_1,param_2,&local_88);
      if (*(int *)local_88 != -1) {
        QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          iVar1 = *(int *)local_88;
          UNLOCK();
          goto joined_r0x0001001622bd;
        }
        goto LAB_1001624e6;
      }
    }
  }
  local_c0 = *(QArrayData **)(param_3 + 8);
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_31 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  lVar6 = FUN_10015cb20(param_1,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100162559;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100162559:
  if (lVar6 != 0) {
    FUN_10018fec0(lVar6,param_2,param_3);
  }
  return;
}

