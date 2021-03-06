#pragma once

#include "framework.h"
#include "shape_editor.h"

using EditorFactory = ShapeEditor*(*)(HWND);

class Tool
{
public:
	static const Tool POINT;
	static const Tool LINE;
	static const Tool RECT;
	static const Tool ELLIPSE;
	static const Tool OLINEO;
	static const Tool CUBE;

private:
	LPCSTR title;
	int menuItemId;
	int toolbarItemId;
	EditorFactory factory;
	Tool(LPCSTR _title, int _menuItemId, int _toolbarItemuId, EditorFactory _factory);

public:
	LPCSTR getTitle();
	int getMenuItemId();
	int getToolbarItemId();
	ShapeEditor* getEditor(HWND hWnd);
};
