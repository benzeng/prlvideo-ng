
/* CBaseNodeSignals::isSignalsEnabled() const */

bool __thiscall CBaseNodeSignals::isSignalsEnabled(CBaseNodeSignals *this)

{
  return *(int *)(this + 0xa4) != 0;
}

