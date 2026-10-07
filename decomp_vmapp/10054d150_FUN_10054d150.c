
void FUN_10054d150(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined **local_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  QSemaphore local_88 [8];
  undefined8 ***local_80;
  undefined8 ***local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_2 + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((lVar4 == 0) || (*(char *)(param_1 + 0x78) == '\0')) {
    return;
  }
  lVar4 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),0,0);
  if (lVar4 == 0) {
    plVar5 = (long *)FUN_10054c8a0(param_1,1,0);
    if (plVar5 != (long *)0x0) {
      plVar6 = (long *)FUN_100546830(param_2,*(undefined4 *)(*(long *)(param_1 + 0x28) + 4),1);
      cVar3 = *(char *)(*(long *)(param_1 + 0x28) + 2);
      local_48 = 5;
      if (cVar3 != '\x04') {
        local_48 = (uint)(cVar3 == '\x03') * 3 + 1;
      }
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 4);
      uVar2 = *(uint *)(param_1 + 0x50);
      if (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x50)) {
        uVar2 = *(uint *)(param_1 + 0x30);
      }
      uVar8 = 0;
      if ((*(long *)(param_2 + 0x30) != 0) &&
         (uVar8 = 0, *(char *)(*(long *)(param_2 + 0x30) + 0x18) != '\0')) {
        uVar8 = *(undefined8 *)(param_2 + 0x40);
      }
      local_94 = FUN_100752170(local_48);
      local_a0 = &PTR_FUN_100bceab8;
      local_8c = 0;
      local_98 = uVar1;
      local_90 = uVar2;
      QSemaphore::QSemaphore(local_88,0);
      local_80 = &local_80;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_a0 = &PTR_FUN_100bcebb0;
      local_38 = 0;
      local_78 = local_80;
      local_40 = uVar8;
      do {
        cVar3 = FUN_100751370(&local_a0,plVar5,plVar6);
        if (local_70 == 0) break;
      } while (cVar3 == '\x01');
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_10054fb50(&local_a0);
      return;
    }
    pcVar7 = "Recover main memory: file object allocation failed";
  }
  else {
    pcVar7 = "Recover main memory: failed to seek compressed file";
  }
  FUN_1008e3970("","TransMem",0,pcVar7);
  return;
}

