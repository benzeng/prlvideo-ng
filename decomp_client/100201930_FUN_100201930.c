
void FUN_100201930(long param_1,int param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  CVmEventParameter *local_88;
  Data *local_80;
  Data *local_78;
  long local_70;
  long local_68;
  Data_conflict local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined *local_48;
  QArrayData *local_40;
  undefined *local_38;
  undefined1 local_29;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar7 = param_3 != 1 | 0x3e82;
  if ((param_2 == 0x32f2) && (uVar7 = 0x3e81, param_3 == 1)) {
    uVar7 = 0x3e9c;
    FUN_100201520(param_1,&local_40);
  }
  puVar2 = PTR_shared_null_1021e15e8;
  local_48 = PTR_shared_null_1021e15e8;
  iVar6 = QVariant::type();
  if (iVar6 == 9) {
    QVariant::toList();
    if (local_48 != local_50) {
      FUN_100036740(&local_38,&local_50);
      puVar4 = local_38;
      local_38 = local_48;
      local_48 = puVar4;
      FUN_100035ea0(&local_38);
    }
    FUN_100035ea0(&local_50);
    iVar6 = *(int *)(local_48 + 8);
    iVar9 = *(int *)(local_48 + 0xc);
    if (iVar9 - iVar6 == 0 || iVar9 < iVar6) goto LAB_100201c99;
    iVar8 = (iVar9 - iVar6) + -1;
  }
  else {
    if ((*(uint *)(param_4 + 8) & 0x3fffffff) == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: invalid message parameter");
      goto LAB_100201c99;
    }
    FUN_10012ae80(&local_48,param_4);
    iVar6 = *(int *)(local_48 + 8);
    iVar9 = *(int *)(local_48 + 0xc);
    iVar8 = 0;
  }
  if (iVar8 < iVar9 - iVar6) {
    QVariant::QVariant((QVariant *)&local_60,
                       *(QVariant **)(local_48 + ((long)iVar8 + (long)iVar6) * 8 + 0x10));
  }
  else {
    local_58 = 0x80000000;
    local_60.field7 = 0;
  }
  if (DAT_102271188 == 0) {
    DAT_102271188 = FUN_1001ce5a0("SdkHandleWrap",0xffffffffffffffff,1);
  }
  cVar5 = QVariant::canConvert((int)&local_60);
  if (cVar5 != '\0') {
    FUN_1002030c0(&local_68,&local_60);
    pQVar3 = local_40;
    if (*(int *)(local_40 + 4) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      local_70 = local_68;
      if (local_68 != 0) {
        _PrlHandle_AddRef(local_68);
      }
      local_78 = (Data *)puVar2;
      CSdkRequest::sendAnswer(uVar1,&local_70,uVar7,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100201c75;
        }
        QListData::dispose(local_78);
      }
LAB_100201c75:
      if (local_70 != 0) {
        _PrlHandle_Free();
      }
    }
    else {
      local_80 = (Data *)puVar2;
      local_88 = operator_new(0xd0);
      local_90 = pQVar3;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      local_98 = (QArrayData *)QString::fromAscii_helper("convert_vm_search_path",0x16);
      CVmEventParameter::CVmEventParameter(local_88,1,&local_90,&local_98);
      FUN_100202fa0(&local_80,&local_88);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_29 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100201b53;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100201b53:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100201b89;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100201b89:
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      local_a0 = local_68;
      if (local_68 != 0) {
        _PrlHandle_AddRef(local_68);
      }
      CSdkRequest::sendAnswer(uVar1,&local_a0,uVar7,&local_80);
      if (local_a0 != 0) {
        _PrlHandle_Free();
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100201c83;
        }
        QListData::dispose(local_80);
      }
    }
LAB_100201c83:
    if (local_68 != 0) {
      _PrlHandle_Free(local_68);
    }
  }
  QVariant::~QVariant((QVariant *)&local_60);
LAB_100201c99:
  FUN_100035ea0(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

