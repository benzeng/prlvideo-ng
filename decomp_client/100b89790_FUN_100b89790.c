
void FUN_100b89790(long param_1)

{
  bool bVar1;
  int iVar2;
  long local_28;
  long local_20;
  long local_18;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    if (((*(int *)(param_1 + 0x1c) == 3) && (*(int *)(param_1 + 0x18) == 3)) &&
       (QDate::QDate((QDate *)&local_18,0x7d9,0xb,0xf), *(long *)(param_1 + 0x58) <= local_18)) {
      *(undefined4 *)(param_1 + 0x18) = 2;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) goto LAB_100b897df;
    if ((*(int *)(param_1 + 0x1c) != 2) ||
       ((*(int *)(param_1 + 0x18) != 1 || (*(int *)(param_1 + 0x68) != 0)))) goto LAB_100b8983b;
  }
  else {
LAB_100b897df:
    if (((iVar2 != 2) || (*(int *)(param_1 + 0x20) != 3)) ||
       ((*(int *)(param_1 + 0x1c) != 1 ||
        ((*(int *)(param_1 + 0x18) != 2 ||
         (QDate::QDate((QDate *)&local_20,0x7d8,9,0x10), *(long *)(param_1 + 0x58) != local_20))))))
    goto LAB_100b8983b;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x1000;
LAB_100b8983b:
  if (*(int *)(param_1 + 0x7c) == 0) {
    bVar1 = false;
  }
  else {
    QDate::QDate((QDate *)&local_28,0x7db,2,0xb);
    bVar1 = local_28 < *(long *)(param_1 + 0x58);
  }
  *(uint *)(param_1 + 0x7c) = (uint)bVar1;
  return;
}

