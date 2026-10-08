
void FUN_100087c70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  QArrayData *local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined1 local_40 [15];
  undefined1 local_31;
  
  if ((((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
      (*(long *)(param_1 + 0x28) != 0)) && (lVar4 = FUN_100190780(), lVar4 != 0)) {
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_array_1022698b0);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar6 = FUN_100190780(uVar6);
    FUN_1007c8b40(local_40,uVar6);
    FUN_10008d4c0(&local_60,local_40);
    puVar1 = PTR_s_addObject__1022692e8;
    local_58 = local_60 + 0x10 + (long)*(int *)(local_60 + 8) * 8;
    local_50 = local_60 + 0x10 + (long)*(int *)(local_60 + 0xc) * 8;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
        local_48 = 1;
        QHostAddress::toString();
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (puVar2,PTR_s_stringWithQString__102268d00,&local_68);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,puVar1,uVar6);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100087da4;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100087da4:
        local_58 = local_58 + 8;
      } while (local_58 != local_50);
    }
    local_48 = 1;
    FUN_10008c780(&local_60);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_setVmIpAddresses__10226a0c8,uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar5 = FUN_10018f5c0(uVar5);
    iVar3 = FUN_1007c7cf0(uVar5);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar6,PTR_s_setGuestNetworkInfoAvailable__10226a0d0,iVar3 == 1);
    FUN_10008c780(local_40);
  }
  return;
}

