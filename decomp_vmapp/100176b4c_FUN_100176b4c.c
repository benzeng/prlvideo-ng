
void FUN_100176b4c(long param_1,long *param_2)

{
  *(long *)param_2[1] = *param_2;
  *(long *)(*param_2 + 8) = param_2[1];
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 8))(param_2);
  }
  (*(code *)_xmlFree)(param_2);
  return;
}

