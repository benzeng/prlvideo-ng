
QString * FUN_100784f40(QString *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    plVar1 = *(long **)(param_2 + 8);
    plVar4 = (long *)(param_2 + 8);
    do {
      while (plVar3 = plVar1, iVar2 = FUN_1007ea6f0(plVar3 + 4,param_3), iVar2 < 0) {
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) goto LAB_100784fb0;
      }
      plVar4 = plVar3;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_100784fb0:
    if ((plVar4 != (long *)(param_2 + 8)) && (iVar2 = FUN_1007ea6f0(param_3,plVar4 + 4), -1 < iVar2)
       ) {
      QString::operator=(param_1,(QString *)(plVar4 + 7));
    }
  }
  return param_1;
}

