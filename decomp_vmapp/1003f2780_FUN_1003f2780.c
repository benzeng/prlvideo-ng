
void FUN_1003f2780(long *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  QArrayData *pQVar8;
  QArrayData *local_60;
  QArrayData *local_50;
  undefined1 local_48 [2];
  byte local_46;
  byte local_3c;
  byte local_3b;
  int local_30;
  undefined1 local_29;
  
  lVar6 = param_1[0xb];
  puVar1 = (undefined1 *)(lVar6 + 6);
  bVar2 = *(byte *)(lVar6 + 2);
  bVar3 = *(byte *)(lVar6 + 9);
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar7 = *(uint *)(param_1 + 0x19), uVar7 == 0xffffffff)) {
    uVar4 = CONCAT11((char)*(undefined2 *)(lVar6 + 7),
                     (char)((ushort)*(undefined2 *)(lVar6 + 7) >> 8));
    uVar7 = 0x10000;
    if (uVar4 != 0) {
      uVar7 = (uint)uVar4;
    }
    lVar6 = param_1[0xb];
  }
  local_30 = 1;
  iVar5 = (**(code **)(*(long *)param_1[1] + 0x68))
                    ((long *)param_1[1],*(byte *)(lVar6 + 1) >> 1 & 1,bVar2 & 0xf,*puVar1,param_1[9]
                     ,uVar7 & 0xffff,&local_30,local_48);
  if (iVar5 == 0) {
    if (local_30 == 0) {
      if ((bVar3 & 0xc0) == 0 && (bVar2 & 0xf) == 0) {
        bVar2 = *(byte *)(param_1[9] + 5 + (ulong)*(byte *)(param_1[9] + 3) * 8);
        *(uint *)((long)param_1 + 0x74) = bVar2 & 0xf;
        *(uint *)(param_1 + 0xf) = (bVar2 & 0xf) != 0 | 100;
      }
      (**(code **)(*param_1 + 0x278))(param_1,uVar7,uVar7);
      return;
    }
    if (local_30 == 2) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)local_3b | (uint)local_3c << 8 | (uint)local_46 << 0x10);
      return;
    }
    pQVar8 = (QArrayData *)param_1[0x24];
    if (1 < *(int *)pQVar8 + 1U) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + 1;
      local_29 = *(int *)pQVar8 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","DVDImage",0,"[Devices] Can not read TOC from device %s Status = 0x%X",
                  local_60 + *(long *)(local_60 + 0x10),local_30);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003f29c6;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1003f29c6:
    if (*(int *)pQVar8 == -1) goto LAB_1003f29f6;
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      iVar5 = *(int *)pQVar8;
      UNLOCK();
      goto joined_r0x0001003f29e1;
    }
  }
  else {
    pQVar8 = (QArrayData *)param_1[0x24];
    if (1 < *(int *)pQVar8 + 1U) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + 1;
      local_29 = *(int *)pQVar8 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","DVDImage",0,"[Devices] Can not read TOC from device %s",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003f2895;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1003f2895:
    if (*(int *)pQVar8 == -1) goto LAB_1003f29f6;
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      iVar5 = *(int *)pQVar8;
      UNLOCK();
joined_r0x0001003f29e1:
      local_29 = iVar5 != 0;
      if ((bool)local_29) goto LAB_1003f29f6;
    }
  }
  QArrayData::deallocate(pQVar8,2,8);
LAB_1003f29f6:
  (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
  return;
}

