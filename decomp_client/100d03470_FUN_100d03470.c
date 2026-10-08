
undefined4 FUN_100d03470(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_60;
  undefined8 local_58;
  QArrayData *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  puVar1 = (undefined8 *)(param_1 + 0x110);
  uVar7 = param_2 + 1;
  puVar4 = *(uint **)(param_1 + 0x110);
  if (1 < *puVar4) {
    if ((puVar4[2] & 0x7fffffff) == 0) {
      puVar4 = (uint *)QArrayData::allocate(0x28,8,0,2);
      *puVar1 = puVar4;
    }
    else {
      FUN_100d063c0(puVar1,puVar4[1],puVar4[2] & 0x7fffffff,0);
      puVar4 = (uint *)*puVar1;
    }
  }
  bVar2 = *(byte *)((long)puVar4 + *(long *)(puVar4 + 4));
  uVar6 = 0;
  if (bVar2 != uVar7) {
    if (1 < *puVar4) {
      if ((puVar4[2] & 0x7fffffff) == 0) {
        puVar4 = (uint *)QArrayData::allocate(0x28,8,0,2);
        *puVar1 = puVar4;
      }
      else {
        FUN_100d063c0(puVar1,puVar4[1],puVar4[2] & 0x7fffffff,0);
        puVar4 = (uint *)*puVar1;
      }
    }
    uVar5 = (uint)*(byte *)(*(long *)(puVar4 + 4) + 0x28 + (long)puVar4) + (uint)bVar2;
    uVar6 = 1;
    if (uVar5 != uVar7) {
      if (1 < *puVar4) {
        if ((puVar4[2] & 0x7fffffff) == 0) {
          puVar4 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar1 = puVar4;
        }
        else {
          FUN_100d063c0(puVar1,puVar4[1],puVar4[2] & 0x7fffffff,0);
          puVar4 = (uint *)*puVar1;
        }
      }
      uVar5 = *(byte *)(*(long *)(puVar4 + 4) + 0x50 + (long)puVar4) + uVar5;
      uVar6 = 2;
      if (uVar5 != uVar7) {
        if (1 < *puVar4) {
          if ((puVar4[2] & 0x7fffffff) == 0) {
            puVar4 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar4;
          }
          else {
            FUN_100d063c0(puVar1,puVar4[1],puVar4[2] & 0x7fffffff,0);
            puVar4 = (uint *)*puVar1;
          }
        }
        uVar6 = 3;
        if (*(byte *)(*(long *)(puVar4 + 4) + 0x78 + (long)puVar4) + uVar5 != uVar7) {
          return 0xffffffff;
        }
      }
    }
  }
  local_60 = *param_3;
  local_58 = param_3[1];
  local_50 = (QArrayData *)param_3[2];
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  local_48 = param_3[3];
  local_40 = param_3[4];
  uVar3 = FUN_100d036d0(param_1,uVar6,&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return uVar3;
}

