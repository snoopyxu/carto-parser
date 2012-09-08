#ifndef NODE_TYPES_H
#define NODE_TYPES_H

enum carto_node_type
{
    CARTO_UNDEFINED,
    CARTO_VARIABLE,
    CARTO_MIXIN,
    CARTO_STYLE,
    CARTO_MAP_STYLE,
    CARTO_FILTER,
    CARTO_ATTRIBUTE,
    CARTO_COLOR,
    CARTO_FUNCTION,
    CARTO_COMMENT,
    CARTO_EXPRESSION,
    CARTO_EXP_PLUS,
    CARTO_EXP_MINUS,
    CARTO_EXP_TIMES,
    CARTO_EXP_DIVIDE,
    CARTO_EXP_NEG,
    CARTO_EXP_FUNCTION,
    CARTO_EXP_COLOR,
    CARTO_EXP_VAR,
    CARTO_EXP_PERCENTAGE
};

#endif
