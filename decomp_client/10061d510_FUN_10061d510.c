
void FUN_10061d510(long param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  QPixmap *pQVar2;
  QString *pQVar3;
  undefined8 *puVar4;
  QArrayData *pQVar5;
  QString local_b8;
  QString local_b0;
  QPixmap local_a8 [32];
  QArrayData *local_88;
  QPixmap local_80 [32];
  QArrayData *local_60;
  QPixmap local_58 [32];
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x80);
  if (param_3 == 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x38);
  }
  pQVar2 = (QPixmap *)*puVar4;
  if (param_2 == 1) {
    local_88 = (QArrayData *)QString::fromAscii_helper(":Cross.png",10);
    QPixmap::QPixmap(local_80,&local_88,0,0);
    QLabel::setPixmap(pQVar2);
    QPixmap::~QPixmap(local_80);
    if (*(int *)local_88 != -1) {
      pQVar5 = local_88;
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        iVar1 = *(int *)local_88;
        UNLOCK();
joined_r0x00010061d602:
        local_29 = iVar1 != 0;
        if ((bool)local_29) goto LAB_10061d63f;
      }
LAB_10061d608:
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
  else if (param_2 == 0) {
    local_60 = (QArrayData *)QString::fromAscii_helper(":Check.png",10);
    QPixmap::QPixmap(local_58,&local_60,0,0);
    QLabel::setPixmap(pQVar2);
    QPixmap::~QPixmap(local_58);
    if (*(int *)local_60 != -1) {
      pQVar5 = local_60;
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        iVar1 = *(int *)local_60;
        UNLOCK();
        goto joined_r0x00010061d602;
      }
      goto LAB_10061d608;
    }
  }
  else {
    QPixmap::QPixmap(local_a8);
    QLabel::setPixmap(pQVar2);
    QPixmap::~QPixmap(local_a8);
  }
LAB_10061d63f:
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x18) + 0xa8);
  if (*(int *)(*param_4 + 4) == 0) {
    QLabel::clear();
    return;
  }
  QString::fromUtf8_helper((char *)&local_b8,0x1e0811a);
  QString::append(&local_b8);
  local_b0.field0_0x0 = local_b8.field0_0x0;
  if (1 < *(int *)local_b8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
    local_29 = *(int *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e0814b);
  QString::append(&local_b0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061d6f1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10061d6f1:
  QLabel::setText(pQVar3);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_29 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061d736;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_10061d736:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_b8.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
  return;
}

