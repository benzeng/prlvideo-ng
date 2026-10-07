
void FUN_1004ae640(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_1004b3f40(param_3);
  if (*(short *)(param_2 + 0x14) == 0x18) {
    lVar2 = FUN_1004b3f20(param_3);
    if (lVar2 == 0) {
      uVar3 = FUN_1002a6010(param_2);
      cVar1 = FUN_1004b3ea0(param_3,uVar3);
      if (cVar1 == '\0') {
        FUN_1004b3f30(param_3,param_2);
        goto LAB_1004ae7ea;
      }
      FUN_1004b3f30(param_3,0);
      uVar3 = 0;
    }
    else {
      uVar3 = 0xf0000000;
    }
    FUN_1004c07d0(param_1 + 0x10,param_2,uVar3);
LAB_1004ae7ea:
    FUN_1004b3f50(param_3);
    return;
  }
  if (DAT_1011b55f8 < 1) goto LAB_1004ae782;
  FUN_1004b3f60(&local_40,param_3);
  QString::toLatin1();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                "Invalid inline buffer size. Queue=%s; size=%d; needsize=%ld",
                local_38 + *(long *)(local_38 + 0x10),*(undefined2 *)(param_2 + 0x14),0x18);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004ae752;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1004ae752:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004ae782;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004ae782:
  FUN_1004c07d0(param_1 + 0x10,param_2,0xf0000003);
  FUN_1004b3f50(param_3);
  return;
}

