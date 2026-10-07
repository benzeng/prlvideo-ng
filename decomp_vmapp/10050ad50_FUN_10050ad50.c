
undefined8 *
FUN_10050ad50(long param_1,char *param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  string *psVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  size_t sVar7;
  string *psVar8;
  string *this;
  undefined8 *puVar9;
  string *psVar10;
  size_t sVar11;
  string *psVar12;
  byte *pbVar13;
  bool bVar14;
  string local_50 [24];
  string *local_38;
  
  puVar6 = operator_new(0x28);
  *puVar6 = 0;
  puVar6[1] = param_5;
  puVar6[2] = param_4;
  *(undefined4 *)(puVar6 + 3) = param_3;
  puVar6[4] = 0;
  std::mutex::lock();
  sVar7 = _strlen(param_2);
  psVar12 = (string *)(param_1 + 0xa0);
  psVar8 = *(string **)(param_1 + 0x98);
  while (psVar8 != psVar12) {
    pbVar1 = *(byte **)(psVar8 + 0x20);
    bVar3 = *pbVar1 & 1;
    if (bVar3 == 0) {
      sVar11 = (size_t)(*pbVar1 >> 1);
    }
    else {
      sVar11 = *(size_t *)(pbVar1 + 8);
    }
    if (sVar11 == sVar7) {
      if (bVar3 == 0) {
        pbVar13 = pbVar1 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar1 + 0x10);
      }
      iVar5 = _strcmp((char *)pbVar13,param_2);
      if (iVar5 == 0) {
        puVar9 = operator_new(0x28);
        puVar9[4] = puVar6;
        psVar12 = *(string **)(pbVar1 + 0x20);
        if (*(string **)(pbVar1 + 0x20) != (string *)0x0) goto LAB_10050af73;
        local_38 = (string *)(pbVar1 + 0x20);
        goto LAB_10050b198;
      }
    }
    psVar10 = *(string **)(psVar8 + 8);
    if (*(string **)(psVar8 + 8) == (string *)0x0) {
      do {
        psVar10 = *(string **)(psVar8 + 0x10);
        bVar14 = *(string **)psVar10 != psVar8;
        psVar8 = psVar10;
      } while (bVar14);
    }
    else {
      do {
        psVar8 = psVar10;
        psVar10 = *(string **)psVar8;
      } while (*(string **)psVar8 != (string *)0x0);
    }
  }
  this = operator_new(0x40);
  _strlen(param_2);
  std::string::__init((char *)local_50,(ulong)param_2);
  std::string::string(this,local_50);
  psVar8 = this + 0x18;
  psVar10 = this + 0x20;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(string **)(this + 0x18) = psVar10;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  std::string::~string(local_50);
  puVar9 = operator_new(0x28);
  puVar9[4] = puVar6;
  psVar2 = *(string **)psVar10;
  if (*(string **)psVar10 == (string *)0x0) {
    local_38 = psVar10;
  }
  else {
    do {
      while (local_38 = psVar2, *(undefined8 **)(local_38 + 0x20) <= puVar6) {
        if (puVar6 <= *(undefined8 **)(local_38 + 0x20)) {
          psVar10 = (string *)&local_38;
          goto LAB_10050afc0;
        }
        psVar2 = *(string **)(local_38 + 8);
        if (*(string **)(local_38 + 8) == (string *)0x0) {
          psVar10 = local_38 + 8;
          goto LAB_10050afc0;
        }
      }
      psVar2 = *(string **)local_38;
    } while (*(string **)local_38 != (string *)0x0);
    psVar10 = local_38;
  }
LAB_10050afc0:
  if (*(long *)psVar10 == 0) {
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[2] = local_38;
    *(undefined8 **)psVar10 = puVar9;
    if (**(long **)psVar8 != 0) {
      *(long *)psVar8 = **(long **)psVar8;
      puVar9 = *(undefined8 **)psVar10;
    }
    FUN_1000e8bb0(*(undefined8 *)(this + 0x20),puVar9);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  else {
    puVar9[4] = 0;
    operator_delete(puVar6);
    operator_delete(puVar9);
  }
  *puVar6 = this;
  if ((*(byte *)(puVar6 + 3) & 1) == 0) {
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  }
  psVar10 = operator_new(0x28);
  *(string **)(psVar10 + 0x20) = this;
  psVar2 = *(string **)psVar12;
  if (*(string **)psVar12 == (string *)0x0) {
    local_38 = psVar12;
  }
  else {
    do {
      while (local_38 = psVar2, *(string **)(local_38 + 0x20) <= this) {
        if (this <= *(string **)(local_38 + 0x20)) {
          psVar12 = (string *)&local_38;
          goto LAB_10050b0b9;
        }
        psVar2 = *(string **)(local_38 + 8);
        if (*(string **)(local_38 + 8) == (string *)0x0) {
          psVar12 = local_38 + 8;
          goto LAB_10050b0b9;
        }
      }
      psVar2 = *(string **)local_38;
    } while (*(string **)local_38 != (string *)0x0);
    psVar12 = local_38;
  }
LAB_10050b0b9:
  if (*(string **)psVar12 == (string *)0x0) {
    *(undefined8 *)(psVar10 + 8) = 0;
    *(undefined8 *)psVar10 = 0;
    *(string **)(psVar10 + 0x10) = local_38;
    *(string **)psVar12 = psVar10;
    if (**(long **)(param_1 + 0x98) != 0) {
      *(long *)(param_1 + 0x98) = **(long **)(param_1 + 0x98);
      psVar10 = *(string **)psVar12;
    }
    FUN_1000e8bb0(*(undefined8 *)(param_1 + 0xa0),psVar10);
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  }
  else {
    *(undefined8 *)(psVar10 + 0x20) = 0;
    FUN_10050c420(psVar8,*(undefined8 *)(this + 0x20));
    std::string::~string(this);
    operator_delete(this);
    operator_delete(psVar10);
  }
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  cVar4 = FUN_10050c530(param_1,this);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    std::mutex::unlock();
    _CFRunLoopSourceSignal(*(undefined8 *)(param_1 + 0xe0));
    if (*(ulong *)(param_1 + 0xe8) < 2) {
      return puVar6;
    }
    _CFRunLoopWakeUp();
    return puVar6;
  }
LAB_10050b228:
  std::mutex::unlock();
  return puVar6;
  while (psVar12 = *(string **)local_38, *(string **)local_38 != (string *)0x0) {
LAB_10050af73:
    local_38 = psVar12;
    if (*(undefined8 **)(local_38 + 0x20) <= puVar6) {
      if (puVar6 <= *(undefined8 **)(local_38 + 0x20)) {
        psVar12 = (string *)&local_38;
        goto LAB_10050b1a9;
      }
      psVar12 = *(string **)(local_38 + 8);
      if (*(string **)(local_38 + 8) == (string *)0x0) {
        psVar12 = local_38 + 8;
        goto LAB_10050b1a9;
      }
      goto LAB_10050af73;
    }
  }
LAB_10050b198:
  psVar12 = local_38;
LAB_10050b1a9:
  if (*(long *)psVar12 == 0) {
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[2] = local_38;
    *(undefined8 **)psVar12 = puVar9;
    if (**(long **)(pbVar1 + 0x18) != 0) {
      *(long *)(pbVar1 + 0x18) = **(long **)(pbVar1 + 0x18);
      puVar9 = *(undefined8 **)psVar12;
    }
    FUN_1000e8bb0(*(undefined8 *)(pbVar1 + 0x20),puVar9);
    *(long *)(pbVar1 + 0x28) = *(long *)(pbVar1 + 0x28) + 1;
  }
  else {
    puVar9[4] = 0;
    operator_delete(puVar6);
    operator_delete(puVar9);
  }
  *puVar6 = *(undefined8 *)(psVar8 + 0x20);
  if ((*(byte *)(puVar6 + 3) & 1) == 0) {
    *(long *)(*(long *)(psVar8 + 0x20) + 0x30) = *(long *)(*(long *)(psVar8 + 0x20) + 0x30) + 1;
  }
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  goto LAB_10050b228;
}

