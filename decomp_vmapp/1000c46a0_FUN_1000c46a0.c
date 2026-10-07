
undefined8 * FUN_1000c46a0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ushort uVar2;
  undefined8 *puVar3;
  string local_88 [24];
  string local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar2 = *(ushort *)(param_2 + 0xe) >> 0xe;
  if (uVar2 == 2) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
    puVar3 = operator_new(0x158);
    std::string::__init((char *)local_70,0x100a320a0);
    FUN_1000c4100(puVar3,param_2,local_70,-lVar1 & param_3,lVar1,param_3);
    std::string::~string(local_70);
  }
  else if (uVar2 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_1000c4870(*(undefined8 *)(param_1 + 0x10),param_3,&local_30,&local_38,&local_58);
    puVar3 = operator_new(0x158);
    FUN_1000c4100(puVar3,param_2,&local_58,local_30,local_38,param_3);
    *puVar3 = &PTR_FUN_100ba8d50;
    std::string::~string((string *)&local_58);
  }
  else {
    puVar3 = operator_new(0x140);
    std::string::__init((char *)local_88,0x100a320a0);
    *puVar3 = &PTR_FUN_100ba8cc0;
    std::string::string((string *)(puVar3 + 3),local_88);
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(param_2 + 0xe);
    *(undefined2 *)((long)puVar3 + 10) = *(undefined2 *)(param_2 + 4);
    puVar3[2] = param_3;
    *(undefined4 *)(puVar3 + 6) = 0;
    ___bzero(puVar3 + 7,0x108);
    std::string::~string(local_88);
  }
  return puVar3;
}

