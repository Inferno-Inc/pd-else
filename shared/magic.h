#include "m_imp.h" // for obj_findsignalscalar

#define MAGIC_NAN 0x7FFFFFFFul

union magic_ui32_fl{
	uint32_t uif_uint32;
	t_float uif_float;
};

int inlet_connection(t_object *x, t_glist *glist, int inno, t_symbol *outsym);
void magic_setnan (t_float *in);
int magic_isnan (t_float in);
