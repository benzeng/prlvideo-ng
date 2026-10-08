
void FUN_100139a80(QString *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  QKeySequence *this;
  uint uVar4;
  QKeySequence local_68 [8];
  QArrayData *local_60;
  QKeySequence local_58 [8];
  QArrayData *local_50;
  QKeySequence local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar1 = *(uint *)(param_2 + 0x28);
  uVar2 = QKeyEvent::modifiers();
  if (((uVar1 & 0xfffffffb) == 0x1000003) && (*(char *)((long)&param_1[6].field0_0x0 + 4) != '\0'))
  {
    QLineEdit::clear();
    FUN_1007fb430(param_1,0,0);
    return;
  }
  uVar4 = 0;
  if ((uVar1 & 0xfffffffc) != 0x1000020) {
    uVar4 = uVar1;
  }
  bVar3 = *(byte *)((long)&param_1[6].field0_0x0 + 5) ^ 1;
  if (*(int *)&param_1[6].field0_0x0 != 1) {
    if (*(int *)&param_1[6].field0_0x0 != 2) {
      QKeySequence::QKeySequence(local_68,uVar2 | uVar4,0,0,0);
      FUN_1007170a0(&local_60,local_68,bVar3);
      QLineEdit::setText(param_1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100139c34;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100139c34:
      this = local_68;
      goto LAB_100139c38;
    }
    QKeySequence::QKeySequence(local_58,uVar4,0,0,0);
    FUN_1007170a0(&local_50,local_58,bVar3);
    QLineEdit::setText(param_1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100139bcb;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100139bcb:
    this = local_58;
    goto LAB_100139c38;
  }
  QKeySequence::QKeySequence(local_48,uVar2,0,0,0);
  FUN_1007170a0(&local_40,local_48,bVar3);
  QLineEdit::setText(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100139b5d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100139b5d:
  this = local_48;
LAB_100139c38:
  QKeySequence::~QKeySequence(this);
  FUN_1007fb430(param_1,uVar4,uVar2);
  return;
}

