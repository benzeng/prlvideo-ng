
void FUN_10000c640(long *param_1,string *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x88);
  std::string::string((string *)(plVar2 + 2),param_2);
  std::string::string((string *)(plVar2 + 5),param_2 + 0x18);
  std::string::string((string *)(plVar2 + 8),param_2 + 0x30);
  std::string::string((string *)(plVar2 + 0xb),param_2 + 0x48);
  *(string *)(plVar2 + 0x10) = param_2[0x70];
  lVar1 = *(long *)(param_2 + 0x60);
  plVar2[0xf] = *(long *)(param_2 + 0x68);
  plVar2[0xe] = lVar1;
  plVar2[1] = (long)param_1;
  lVar1 = *param_1;
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  *param_1 = (long)plVar2;
  param_1[2] = param_1[2] + 1;
  return;
}

