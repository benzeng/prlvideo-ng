
undefined8 FUN_100705de0(long param_1)

{
  QString *this;
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  QString local_38;
  undefined1 local_29;
  
  this = (QString *)(param_1 + 0x30);
  if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0) {
    FUN_100705280(&local_38,**(undefined8 **)(*(long *)(param_1 + 0x18) + 0x10),
                  *(undefined4 *)(param_1 + 0x28));
    QString::operator=(this,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100705e52;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100705e52:
  local_48 = (QArrayData *)QString::fromAscii_helper(":",1);
  QString::split(&local_40,this,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100705eaf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100705eaf:
  if (*(int *)(local_40 + 0xc) != *(int *)(local_40 + 8)) {
    lVar4 = *(long *)(local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10);
    iVar1 = QString::compare_helper
                      (*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4),"user",0xffffffff,
                       1);
    uVar5 = 1;
    if (iVar1 == 0) goto LAB_100705f99;
    lVar4 = *(long *)(local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10);
    iVar1 = QString::compare_helper
                      (*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4),"group",0xffffffff
                       ,1);
    uVar5 = 2;
    if (iVar1 == 0) goto LAB_100705f99;
  }
  uVar5 = 0;
  if (*(int *)(this->field0_0x0 + 4) != 0) {
    QString::toUtf8();
    FUN_1008e3970("","CAuth",0,"Failed to extract owner name from ACL entry text: \'%s\'",
                  local_50 + *(long *)(local_50 + 0x10));
    uVar5 = 0;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100705f99;
      }
      QArrayData::deallocate(local_50,1,8);
      uVar5 = 0;
    }
  }
LAB_100705f99:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_100706010:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_100706010;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_40);
  }
  return uVar5;
}

