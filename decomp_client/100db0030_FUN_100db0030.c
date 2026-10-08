
undefined8 * FUN_100db0030(undefined8 *param_1,long param_2)

{
  QString *this;
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  QString local_38;
  undefined1 local_29;
  
  this = (QString *)(param_2 + 0x30);
  if (*(int *)(*(long *)(param_2 + 0x30) + 4) == 0) {
    FUN_100db03b0(&local_38,**(undefined8 **)(*(long *)(param_2 + 0x18) + 0x10),
                  *(undefined4 *)(param_2 + 0x28));
    QString::operator=(this,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100db00a8;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100db00a8:
  local_48 = (QArrayData *)QString::fromAscii_helper(":",1);
  QString::split(&local_40,this,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100db0105;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100db0105:
  if (2 < *(int *)(local_40 + 0xc) - *(int *)(local_40 + 8)) {
    piVar2 = *(int **)(local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x20);
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
    }
    goto LAB_100db01a7;
  }
  if (*(int *)(this->field0_0x0 + 4) != 0) {
    QString::toUtf8();
    FUN_100df99c0("","CAuth",0,"Failed to extract owner name from ACL entry text: \'%s\'",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100db019d;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_100db019d:
  *param_1 = PTR_shared_null_1021e1288;
LAB_100db01a7:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_100db0210:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_100db0210;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

