
undefined8 FUN_1004f08d0(QString *param_1,QString *param_2)

{
  int iVar1;
  undefined8 uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  int iVar4;
  
  iVar1 = QString::lastIndexOf(param_1,0x2f,0xffffffff,1);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar4 = iVar1 + 2;
    pQVar3 = param_1->field0_0x0;
    if (*(int *)(pQVar3 + 4) < iVar4) {
      uVar2 = 0;
    }
    else if (*(short *)(pQVar3 + (long)(iVar1 + 1) * 2 + *(long *)(pQVar3 + 0x10)) == 0x24) {
      if ((*(ushort *)(pQVar3 + (long)iVar4 * 2 + *(long *)(pQVar3 + 0x10)) | 0x20) == 0x72) {
        QString::operator=(param_2,param_1);
        pQVar3 = param_2->field0_0x0;
        if (iVar4 < (int)*(uint *)(pQVar3 + 4)) {
          if ((1 < *(uint *)pQVar3) || (*(long *)(pQVar3 + 0x10) != 0x18)) {
            QString::reallocData((uint)param_2,(bool)((char)*(uint *)(pQVar3 + 4) + '\x01'));
          }
        }
        else {
          QString::expand((uint)param_2);
        }
        pQVar3 = param_2->field0_0x0 + *(long *)(param_2->field0_0x0 + 0x10);
        *(undefined2 *)(pQVar3 + (long)iVar4 * 2) = 0x49;
        uVar2 = CONCAT71((int7)((ulong)pQVar3 >> 8),1);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

