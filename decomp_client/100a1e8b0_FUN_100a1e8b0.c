
void FUN_100a1e8b0(long param_1)

{
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0xc) != *(int *)(*(long *)(param_1 + 0x10) + 8)) {
    FUN_100a1ec70(local_58,param_1 + 0x10);
    FUN_100a1c840(local_58,0);
    FUN_100322530(param_1);
    QVariant::~QVariant(local_38);
    if (local_58[0] != (int *)0x0) {
      LOCK();
      *local_58[0] = *local_58[0] + -1;
      local_19 = *local_58[0] != 0;
      UNLOCK();
      if ((!(bool)local_19) && (local_58[0] != (int *)0x0)) {
        operator_delete(local_58[0]);
      }
    }
  }
  return;
}

