
QListData * FUN_100603db0(QListData *param_1,long *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(*param_2 + 0xc) != *(int *)(*param_2 + 8)) {
    puVar1 = *(uint **)param_1;
    if (puVar1[3] == puVar1[2]) {
      FUN_1006033e0(param_1,param_2);
    }
    else {
      if (*puVar1 < 2) {
        uVar2 = QListData::append(param_1);
      }
      else {
        uVar2 = FUN_100603740(param_1,0x7fffffff);
      }
      FUN_1006031d0(param_1,uVar2,
                    *(long *)param_1 + 0x10 + (long)*(int *)(*(long *)param_1 + 0xc) * 8,
                    *param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
    }
  }
  return param_1;
}

