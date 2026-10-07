
QString * FUN_1004f4bb0(QString *param_1,long *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar5 = *(int *)(*param_2 + 4);
  if ((((iVar5 < 5) || (cVar2 = FUN_1004f4ad0(param_2), cVar2 == '\0')) ||
      ((iVar3 = QString::lastIndexOf(param_2,0x2e,0xffffffff,1), -1 < iVar3 &&
       (iVar5 = iVar3, iVar3 < 5)))) ||
     (lVar4 = *param_2 + *(long *)(*param_2 + 0x10),
     *(short *)(lVar4 + (long)(iVar5 + -4) * 2) != 0x7e)) {
LAB_1004f4c5c:
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  }
  else {
    if (iVar5 + -3 < 3) {
      uVar1 = *(ushort *)(lVar4 + 4);
      if (uVar1 < 0x41) {
        if (uVar1 < 0x30) goto LAB_1004f4c5c;
        if (0x39 < uVar1) goto joined_r0x0001004f4c5a;
      }
      else if (0x5a < uVar1) {
joined_r0x0001004f4c5a:
        if (0x19 < (ushort)(uVar1 - 0x61)) goto LAB_1004f4c5c;
      }
    }
    QString::mid((int)&local_38,(int)param_2);
    QString::toUpper_helper(param_1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return param_1;
}

