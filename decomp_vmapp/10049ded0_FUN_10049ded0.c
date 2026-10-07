
undefined8 FUN_10049ded0(long *param_1)

{
  string *psVar1;
  void *pvVar2;
  string *this;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  string *psVar7;
  size_t sVar8;
  undefined8 *puVar9;
  string *psVar10;
  undefined8 *puVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar11 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)param_1[2];
  uVar6 = 0;
  uVar3 = 0;
  do {
    if (puVar9 == puVar11) {
LAB_10049e127:
      return CONCAT71((int7)(uVar6 >> 8),uVar3);
    }
LAB_10049df02:
    this = (string *)*puVar11;
    if (this[0x38] != (string)0x0) break;
    psVar1 = this + 0x18;
    for (psVar7 = *(string **)(this + 0x20); psVar7 != psVar1; psVar7 = *(string **)(psVar7 + 8)) {
      psVar7[0x80] = (string)0x0;
    }
    iVar4 = FUN_10049e170(param_1,this);
    if (iVar4 == 5) goto LAB_10049e124;
    psVar7 = *(string **)(this + 0x20);
    while (psVar7 != psVar1) {
      if (psVar7[0x80] == (string)0x0) {
        if (1 < DAT_1011b55f8) {
          if (((byte)psVar7[0x10] & 1) == 0) {
            psVar10 = psVar7 + 0x11;
          }
          else {
            psVar10 = *(string **)(psVar7 + 0x20);
          }
          FUN_1008e3970("AppsCollector","prl_sharedapps",2,"Remove app %s",psVar10);
        }
        puVar9 = (undefined8 *)*param_1;
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1,psVar7 + 0x10);
        }
        psVar7 = (string *)FUN_1004a0b20(psVar1,psVar7);
      }
      else {
        psVar7 = *(string **)(psVar7 + 8);
      }
    }
    this[0x38] = (string)0x1;
    if (iVar4 == 0) {
      puVar9 = (undefined8 *)param_1[2];
      puVar5 = (undefined8 *)0x0;
    }
    else {
      if (iVar4 != 1) {
        puVar9 = (undefined8 *)param_1[2];
        break;
      }
      if (1 < DAT_1011b55f8) {
        if (((byte)*this & 1) == 0) {
          psVar7 = this + 1;
        }
        else {
          psVar7 = *(string **)(this + 0x10);
        }
        FUN_1008e3970("AppsCollector","prl_sharedapps",2,"Remove path %s",psVar7);
      }
      if (*param_1 != 0) {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        std::string::operator=((string *)&local_58,this);
        local_40 = *(undefined4 *)(this + 0x30);
        local_3c = *(undefined4 *)(this + 0x34);
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,4,(string *)&local_58);
        std::string::~string((string *)&local_58);
      }
      FUN_10000c730(psVar1);
      std::string::~string(this);
      operator_delete(this);
      pvVar2 = (void *)(((long)puVar11 - param_1[1] & 0xfffffffffffffff8U) + 8 + param_1[1]);
      sVar8 = param_1[2] - (long)pvVar2;
      _memmove(puVar11,pvVar2,sVar8);
      puVar9 = (undefined8 *)((sVar8 & 0xfffffffffffffff8) + (long)puVar11);
      puVar5 = (undefined8 *)param_1[2];
      if (puVar5 != puVar9) {
        puVar9 = (undefined8 *)
                 ((~((long)puVar5 + (-8 - (long)puVar9)) & 0xfffffffffffffff8U) + (long)puVar5);
        param_1[2] = (long)puVar9;
      }
    }
    puVar11 = (undefined8 *)param_1[1];
    uVar6 = CONCAT71((int7)((ulong)puVar5 >> 8),1);
    uVar3 = 1;
  } while( true );
  puVar11 = puVar11 + 1;
  if (puVar9 == puVar11) {
LAB_10049e124:
    uVar6 = uVar6 & 0xffffffff;
    goto LAB_10049e127;
  }
  goto LAB_10049df02;
}

