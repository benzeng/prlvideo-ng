
int FUN_100580370(long *param_1,undefined8 param_2,QByteArray *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  QArrayData *local_30;
  undefined1 local_22;
  
  cVar4 = (**(code **)(*param_1 + 0x3d8))();
  if (cVar4 == '\0') {
    FUN_1008e3970("","vdisk",0,
                  "Trying to set secret key to nonencrypted disk.. Not an error, but weird.");
    return -0x7ffffaea;
  }
  if (param_1[0x236] == 0) {
    FUN_1008e3970("","vdisk",0,"The encryption engine is not initialized. How to set key?");
    return -0x7ffffffd;
  }
  iVar5 = FUN_1005802c0(param_1[0x236],param_2);
  if (iVar5 < 0) {
    pcVar6 = "Set key failed for node with code 0x%x";
    goto LAB_1005805a0;
  }
  iVar5 = (**(code **)(*(long *)param_1[0x236] + 0x50))((long *)param_1[0x236],0);
  if (iVar5 < 0) {
    pcVar6 = "Error setting IV for node with code 0x%x";
    goto LAB_1005805a0;
  }
  (**(code **)(**(long **)(param_1[1] + 0x10) + 0xd0))((QByteArray *)&local_30);
  QByteArray::operator=(param_3,(QByteArray *)&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100580429;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100580429:
  puVar7 = *(uint **)param_3;
  uVar8 = puVar7[1];
  if (uVar8 == 0x400) {
    plVar1 = (long *)param_1[0x236];
    pcVar2 = *(code **)(*plVar1 + 0x40);
    if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,0x401,puVar7[2] >> 0x1f);
      puVar7 = *(uint **)param_3;
    }
    iVar5 = (*pcVar2)(plVar1,(long)puVar7 + *(long *)(puVar7 + 4),0x400,&DAT_100b46ed0);
    if (iVar5 < 0) {
      pcVar6 = "Failed to decrypt with code 0x%x";
LAB_1005805a0:
      FUN_1008e3970("","vdisk",0,pcVar6,iVar5);
      return iVar5;
    }
    lVar3 = *(long *)param_3;
    uVar8 = *(uint *)(lVar3 + *(long *)(lVar3 + 0x10));
    if ((uVar8 - 4 < 0x3cd) &&
       (iVar5 = _memcmp((void *)(lVar3 + *(long *)(lVar3 + 0x10) + (long)(int)uVar8),&DAT_100b46ec0,
                        0x10), iVar5 == 0)) {
      return 0;
    }
    pcVar6 = "The key is wrong [%d]";
  }
  else {
    pcVar6 = "Data is not valid. Size %u";
  }
  FUN_1008e3970("","vdisk",0,pcVar6,uVar8);
  return -0x7ffbcfff;
}

