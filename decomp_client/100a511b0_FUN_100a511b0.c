
undefined8 FUN_100a511b0(long param_1,ulong param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar5 = (long)param_3 * 0x18;
  if (param_2 < uVar5) {
LAB_100a5148e:
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
    if (0 < param_3) {
      puVar8 = (undefined8 *)(param_1 + 0x10);
      lVar7 = 0;
      do {
        if (((param_2 <= *(uint *)(puVar8 + -2)) || (param_2 <= *(uint *)((long)puVar8 + -0xc))) ||
           (param_2 <= *(uint *)(puVar8 + -1))) goto LAB_100a5148e;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_58 = 0;
        FUN_100a509f0(param_4,(string *)&local_a8);
        std::string::~string((string *)&local_78);
        std::string::~string((string *)&uStack_90);
        std::string::~string((string *)&local_a8);
        if ((ulong)*(uint *)(puVar8 + -2) != 0) {
          pcVar9 = (char *)((ulong)*(uint *)(puVar8 + -2) + param_1);
          _strlen(pcVar9);
          std::string::__init((char *)&local_c0,(ulong)pcVar9);
          lVar2 = *param_4;
          local_38 = local_b0;
          local_40 = local_b8;
          local_48 = local_c0;
          uVar6 = *(undefined8 *)(lVar2 + 0x20);
          uVar3 = *(undefined8 *)(lVar2 + 0x10);
          uVar4 = *(undefined8 *)(lVar2 + 0x18);
          *(undefined8 *)(lVar2 + 0x20) = local_b0;
          *(undefined8 *)(lVar2 + 0x18) = local_b8;
          *(undefined8 *)(lVar2 + 0x10) = local_c0;
          local_c0 = uVar3;
          local_b8 = uVar4;
          local_b0 = uVar6;
          std::string::~string((string *)&local_c0);
        }
        if ((ulong)*(uint *)((long)puVar8 + -0xc) != 0) {
          pcVar9 = (char *)((ulong)*(uint *)((long)puVar8 + -0xc) + param_1);
          _strlen(pcVar9);
          std::string::__init((char *)&local_d8,(ulong)pcVar9);
          lVar2 = *param_4;
          local_38 = local_c8;
          local_40 = local_d0;
          local_48 = local_d8;
          uVar6 = *(undefined8 *)(lVar2 + 0x38);
          uVar3 = *(undefined8 *)(lVar2 + 0x28);
          uVar4 = *(undefined8 *)(lVar2 + 0x30);
          *(undefined8 *)(lVar2 + 0x38) = local_c8;
          *(undefined8 *)(lVar2 + 0x30) = local_d0;
          *(undefined8 *)(lVar2 + 0x28) = local_d8;
          local_d8 = uVar3;
          local_d0 = uVar4;
          local_c8 = uVar6;
          std::string::~string((string *)&local_d8);
        }
        if ((ulong)*(uint *)(puVar8 + -1) != 0) {
          pcVar9 = (char *)((ulong)*(uint *)(puVar8 + -1) + param_1);
          _strlen(pcVar9);
          std::string::__init((char *)&local_f0,(ulong)pcVar9);
          lVar2 = *param_4;
          local_38 = local_e0;
          local_40 = local_e8;
          local_48 = local_f0;
          uVar6 = *(undefined8 *)(lVar2 + 0x50);
          uVar3 = *(undefined8 *)(lVar2 + 0x40);
          uVar4 = *(undefined8 *)(lVar2 + 0x48);
          *(undefined8 *)(lVar2 + 0x50) = local_e0;
          *(undefined8 *)(lVar2 + 0x48) = local_e8;
          *(undefined8 *)(lVar2 + 0x40) = local_f0;
          local_f0 = uVar3;
          local_e8 = uVar4;
          local_e0 = uVar6;
          std::string::~string((string *)&local_f0);
        }
        lVar2 = *param_4;
        *(undefined8 *)(lVar2 + 0x58) = *puVar8;
        uVar1 = *(undefined4 *)((long)puVar8 + -4);
        *(undefined4 *)(lVar2 + 0x60) = uVar1;
        lVar7 = lVar7 + 1;
        puVar8 = puVar8 + 3;
      } while (lVar7 < param_3);
      uVar6 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar6;
}

