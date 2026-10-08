
void FUN_100751f90(undefined8 param_1,AnonymousUnion0 *param_2)

{
  char cVar1;
  AnonymousUnion0 AVar2;
  Data *this;
  Data *pDVar3;
  QString local_58;
  QFileInfo local_50 [15];
  undefined1 local_41;
  Data *local_40;
  Data *local_38;
  
  AVar2.field1 = *(Data **)param_2;
  if (*(uint *)AVar2 < 2) {
    this = (Data *)((uint *)((long)AVar2 + 0x10) + (long)(int)*(uint *)((long)AVar2 + 8) * 2);
  }
  else {
    FUN_100036c40(param_2,*(uint *)((long)AVar2 + 4));
    AVar2.field1 = *(Data **)param_2;
    this = AVar2.field1 + (long)(int)*(uint *)(AVar2.field1 + 8) * 8 + 0x10;
    if (1 < *(uint *)AVar2.field1) {
      FUN_100036c40(param_2,*(uint *)(AVar2.field1 + 4));
      AVar2.field1 = *(Data **)param_2;
    }
  }
  if (AVar2.field1 + (long)(int)*(uint *)(AVar2.field1 + 0xc) * 8 + 0x10 != this) {
    do {
      QFileInfo::QFileInfo(local_50,(QString *)this);
      cVar1 = QFileInfo::isDir();
      pDVar3 = this + 8;
      QFileInfo::~QFileInfo(local_50);
      if (cVar1 != '\0') {
        FUN_1007516c0(&local_58);
        if (*(int *)(local_58.field0_0x0 + 4) == 0) {
          if (param_2->field1 + (long)*(int *)(param_2->field1 + 0xc) * 8 + 0x10 != this) {
            local_40 = this;
            FUN_1000557c0(&local_38,param_2,&local_40);
            pDVar3 = local_38;
            if (1 < *(uint *)param_2->field1) {
              FUN_100036c40(param_2,*(uint *)(param_2->field1 + 4));
            }
          }
        }
        else if ((Data *)((long)param_2->field1 + 0x10 +
                         (long)*(int *)((long)param_2->field1 + 0xc) * 8) != this) {
          QString::operator=((QString *)this,&local_58);
        }
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_41 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_41) goto LAB_1007520d0;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
      }
LAB_1007520d0:
      this = pDVar3;
    } while (param_2->field1 + (long)*(int *)(param_2->field1 + 0xc) * 8 + 0x10 != pDVar3);
  }
  QtPrivate::QStringList_removeDuplicates((QStringList *)&param_2->field0);
  return;
}

