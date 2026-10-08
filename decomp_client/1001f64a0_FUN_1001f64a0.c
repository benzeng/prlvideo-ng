
CVirtualNetwork * FUN_1001f64a0(CVirtualNetwork *param_1,void **param_2)

{
  uint *puVar1;
  
  puVar1 = *param_2;
  if (1 < *puVar1) {
    FUN_1001f6890(param_2,puVar1[1]);
    puVar1 = *param_2;
  }
  CVirtualNetwork::CVirtualNetwork
            (param_1,*(CVirtualNetwork **)(puVar1 + (long)(int)puVar1[2] * 2 + 4));
  puVar1 = *param_2;
  if (1 < *puVar1) {
    FUN_1001f6890(param_2,puVar1[1]);
    puVar1 = *param_2;
    if (1 < *puVar1) {
      FUN_1001f6890(param_2,puVar1[1]);
      puVar1 = *param_2;
    }
  }
  if (*(long **)(puVar1 + (long)(int)puVar1[2] * 2 + 4) != (long *)0x0) {
    (**(code **)(**(long **)(puVar1 + (long)(int)puVar1[2] * 2 + 4) + 0x88))();
  }
  QListData::erase(param_2);
  return param_1;
}

