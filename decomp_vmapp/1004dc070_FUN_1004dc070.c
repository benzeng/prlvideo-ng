
void FUN_1004dc070(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1004dc070(param_1,*param_2);
    FUN_1004dc070(param_1,param_2[1]);
    if (param_2[6] != 0) {
      std::__shared_weak_count::__release_shared();
    }
    operator_delete(param_2);
    return;
  }
  return;
}

