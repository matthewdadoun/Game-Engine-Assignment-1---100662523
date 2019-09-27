using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
public class PluginTester : MonoBehaviour
{
    const string DLL_NAME = "Assignment 1 - 100662523";
    [DllImport(DLL_NAME)]
    private static extern void saveCoordinates(float x, float y);
    [DllImport(DLL_NAME)]
    private static extern float LoadCoordinateX();
    [DllImport(DLL_NAME)]
    private static extern float LoadCoordinateZ();
    void Update()
    {
        if (Input.GetKey(KeyCode.S))
        {
            gameObject.transform.position += new Vector3(0.0f, 0.0f, -1.6f * Time.deltaTime);
        }
        if (Input.GetKey(KeyCode.W))
        {
            gameObject.transform.position += new Vector3(0.0f, 0.0f, 1.6f * Time.deltaTime);
        }
        if (Input.GetKey(KeyCode.A))
        {
            gameObject.transform.position += new Vector3(-1.6f * Time.deltaTime, 0.0f, 0.0f);
        }
        if (Input.GetKey(KeyCode.D))
        {
            gameObject.transform.position += new Vector3(1.6f * Time.deltaTime, 0.0f, 0.0f);
        }
        if (Input.GetKey(KeyCode.K))
        {
            Debug.Log("Your position has been saved.");
            saveCoordinates(gameObject.transform.position.x, gameObject.transform.position.z);
        }
        if(Input.GetKey(KeyCode.L))
        {
            gameObject.transform.position = new Vector3(LoadCoordinateX(), 0.0f, LoadCoordinateZ());
            Debug.Log("Your position has been loaded.");
            //Debug.Log(LoadCoordinateX()+ " " + LoadCoordinateZ());
        }
    }
}