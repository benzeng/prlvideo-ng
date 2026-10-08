
undefined8 FUN_100db1480(void)

{
  int iVar1;
  int iVar2;
  acl_t obj_p;
  int *piVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  QArrayData *local_30;
  
  QString::toUtf8();
  obj_p = _acl_get_file((char *)(local_30 + *(long *)(local_30 + 0x10)),ACL_TYPE_EXTENDED);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100db14e1;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100db14e1:
  piVar3 = ___error();
  *piVar3 = 0;
  piVar3 = ___error();
  iVar1 = *piVar3;
  uVar4 = CONCAT71((int7)((ulong)piVar3 >> 8),iVar1 == 0);
  if (obj_p != (acl_t)0x0) {
    iVar2 = _acl_free(obj_p);
    uVar4 = CONCAT44(extraout_var,iVar2);
  }
  return CONCAT71((int7)((ulong)uVar4 >> 8),obj_p != (acl_t)0x0 && iVar1 == 0);
}

