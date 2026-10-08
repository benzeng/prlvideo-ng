
undefined8 FUN_100a48d10(long param_1)

{
  undefined *puVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_array_1022698b0);
  puVar1 = PTR_shared_null_1021e1288;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != param_1) {
    do {
      lVar4 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar4 + 0x10) & 1) == 0) {
        iVar5 = (int)lVar4 + 0x12;
      }
      else {
        iVar5 = (int)*(undefined8 *)(lVar4 + 0x20);
      }
      QString::fromRawData((QChar *)&local_40,iVar5);
      local_48 = (QArrayData *)puVar1;
      if (*(int *)(*(long *)(lVar6 + 0x10) + 0xc) == 0x14) {
        FUN_100a4a010(&local_50,&local_40);
        pQVar2 = local_48;
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
        }
        local_48 = local_50;
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a48df3;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_100a48df3:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a48e3c;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
      else {
        local_48 = local_40;
        local_40 = (QArrayData *)puVar1;
      }
LAB_100a48e3c:
      if ((*(int *)(local_48 + 4) != 0) &&
         (lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00
                             ,&local_48), lVar4 != 0)) {
        iVar5 = *(int *)(*(long *)(lVar6 + 0x10) + 0xc);
        if (iVar5 == 0x14) {
          lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_URLWithString__1022697c8,lVar4)
          ;
        }
        else if (iVar5 == 0x18) {
          lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,
                             lVar4);
        }
        else if (iVar5 != 0x19) goto LAB_100a48ec3;
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_addObject__1022692e8,lVar4);
        }
      }
LAB_100a48ec3:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a48ef3;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100a48ef3:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a48f23;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100a48f23:
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != param_1);
  }
  return uVar3;
}

