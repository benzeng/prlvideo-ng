
void FUN_100a0c1c0(long *param_1,int *param_2)

{
  int iVar1;
  QArrayData *local_40;
  undefined1 local_32;
  
  if (*param_2 < *(int *)(*param_1 + 4)) {
    do {
      local_40 = (QArrayData *)QString::fromAscii_helper(" \t\n\r",4);
      iVar1 = QString::indexOf(&local_40,
                               *(undefined2 *)
                                (*param_1 + *(long *)(*param_1 + 0x10) + (long)*param_2 * 2),0,1);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_32 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_32) goto LAB_100a0c261;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100a0c261:
    } while ((iVar1 != -1) &&
            (iVar1 = *param_2, *param_2 = iVar1 + 1, iVar1 + 1 < *(int *)(*param_1 + 4)));
  }
  return;
}

